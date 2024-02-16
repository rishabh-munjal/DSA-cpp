//program to find the occurance of an element in a sorted arraya

#include <iostream>
#include <vector>
using namespace std;

int FirstOccurance(vector <int> nums , int target){
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

int LastOccurance(vector <int> nums , int target){
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

int count(vector <int> nums , int target){

    return LastOccurance(nums,target) - FirstOccurance(nums,target) + 1;
}

int main()
{
    vector <int> nums = {10 , 20 , 20 , 20 , 30 , 30};
    int target = 20;

    cout<<count(nums,target);
    return 0;
}