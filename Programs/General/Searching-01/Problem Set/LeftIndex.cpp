#include <iostream>
#include <vector>
using namespace std;

int LeftOccur(vector <int> nums , int target){
    int start = 0;
    int end = nums.size();

    while(start <= end){
        int mid = end  + (start-end)/2;

        if(nums[mid] > target){
            end  = mid - 1;
        }
        else if (nums[mid] < target){
            start = mid + 1;
        }
        else{
            if(mid==0 || nums[mid-1] != nums[mid]){
                return mid;
            }
            else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector <int> nums = {10,20,20,20,20,20,20};
    int target = 20;
    
    cout<<LeftOccur(nums , target);
    return 0;
}