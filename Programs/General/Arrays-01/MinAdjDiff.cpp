#include <iostream>
#include <vector>
#include <cstdlib> 
#include <cmath>   

using namespace std;

int MinAdjDiff(vector<int> nums) {
    int diff = abs(nums[0] - nums[1]);

    for (int i = 1; i < nums.size(); i++) {
        
        diff = min(diff,
                   abs(nums[i] - nums[(i - 1) % nums.size()]),  // Backward difference
                   abs(nums[i] - nums[(i + 1) % nums.size()])) ;  // Forward difference
    }

    return diff;
}

int main() {
    vector<int> nums = {8, -8, 9, -9, 10, -11, 12};

    cout << MinAdjDiff(nums) << endl;

    return 0;
}
