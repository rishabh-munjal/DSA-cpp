#include <iostream>
#include <vector>

using namespace std;

int firstOccur(vector<int> nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        int mid = (start + end) / 2; // Corrected addition for mid

        if (nums[mid] > target) {
            end = mid - 1;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else { // Found the target
            if (mid == 0 || nums[mid - 1] != nums[mid]) {
                return mid; // First occurrence
            } else {
                end = mid - 1; // Move left to find earlier occurrences
            }
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> nums = {5,5, 5};
    int target = 5;

    int index = firstOccur(nums, target);
    cout << "Index of first " << target << ": " << index << endl;

    return 0;
}
