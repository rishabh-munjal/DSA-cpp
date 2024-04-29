#include <iostream>
#include <vector>
using namespace std;

int Lpartition(vector<int>& nums, int l, int h) {
    int pivot = nums[h];
    int i = l - 1;

    for (int j = l; j < h; j++) {  // Changed j < h-1 to j < h
        if (nums[j] < pivot) {
            i++;
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[i + 1], nums[h]);
    return i + 1;
}

int KthSmallest(vector<int>& nums, int k) {
    int l = 0;
    int h = nums.size() - 1;

    while (l <= h) {  // Changed l < h to l <= h for the correct condition
        int p = Lpartition(nums, l, h);

        if (p == k - 1) {
            return nums[p];  // Changed from return p to return nums[p]
        } else if (p > k - 1) {
            h = p - 1;
        } else {
            l = p + 1;
        }
    }

    return -1;  // return -1 if k is out of bounds
}

int main() {
    vector<int> nums = {10, 5, 30, 12};  // Added commas
    int k = 2;

    cout << "The " << k << "th smallest element is " << KthSmallest(nums, k) << endl;
    return 0;
}
