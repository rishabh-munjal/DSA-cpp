#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        
        std::vector<int> result;

        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());

        int n = nums1.size();
        int m = nums2.size();

        int i = 0, j = 0 ;

        while(i < n && j < m){
            if(nums1[i] == nums2[j]){
                result.push_back(nums1[i]);
                while(i < n-1 && nums1[i] == nums1[i+1]){
                  i++;
                }
                while(j < m-1 && nums2[j] == nums2[j+1]){
                  j++;
              }
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }

        return result;
    }
};
