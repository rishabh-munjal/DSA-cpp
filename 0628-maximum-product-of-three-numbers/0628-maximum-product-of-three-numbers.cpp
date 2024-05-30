#include <vector>
#include <climits>

class Solution {
public:
    int maximumProduct(std::vector<int>& nums) {
        long long int m1 = INT_MIN;
        long long int m2 = INT_MIN;
        long long int m3 = INT_MIN;
        long long int n1 = INT_MAX;
        long long int n2 = INT_MAX;

        for (int i : nums) {
            if (i >= m1) {
                m3 = m2;
                m2 = m1;
                m1 = i;
            } else if (i >= m2) {
                m3 = m2;
                m2 = i;
            } else if (i > m3) {
                m3 = i;
            }

            if (i <= n1) {
                n2 = n1;
                n1 = i;
            } else if (i < n2) {
                n2 = i;
            }
        }

        return max(m1 * m2 * m3, m1 * n1 * n2);
    }
};
