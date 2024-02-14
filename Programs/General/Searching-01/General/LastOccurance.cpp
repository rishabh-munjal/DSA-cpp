// Finding index of the last occuring element in an array using Binary Search

#include <iostream>
#include <vector>
using namespace std;

int LastOccur(vector <int> nums , int target){
    int start = 0;
    int end = nums.size() - 1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if (nums[mid] > target) {
            end = mid - 1;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else { // Found the target
            if (mid == nums.size()-1 || nums[mid  + 1] != nums[mid]) {
                return mid; // last occurrence
            } else {
                start = mid + 1; // Move left to find earlier occurrences
            }
        }

        
    }

    return - 1;
}

int main()
{
    vector <int> nums = {1,2,2,3,4,5,5};
    int target = 5;

    cout<<LastOccur(nums , target);
    return 0;
}