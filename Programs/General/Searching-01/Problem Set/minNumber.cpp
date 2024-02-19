/*Given an array of distinct elements which was initially sorted.
 This array is rotated at some unknown point.
 The task is to find the minimum element in the given sorted and rotated arra*/

 #include <iostream>
 #include <vector>
 using namespace std;

 int findMin(vector <int> nums){
    int start = 0;
    int end = nums.size() - 1;

     if (end == 0 || nums[end] < nums[start]) { // If last element is smaller than first, return last element
        return nums[end];
    }
    while(start <= end){
        int mid = end + (start - end)/2;

        if(nums[mid]<nums[mid-1] && mid > 0){
            return nums[mid];
        }
        else if (nums[mid] > nums[mid-1]){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
    }

    return -1;
 }
 
 int main()
 {
     vector <int> nums = {3,4,5,1,2};

     cout<<findMin(nums);
     return 0;
 }