#include <iostream>
#include <vector>
using namespace std;

int Peek(vector <int> nums){
    int start = 0;
    int end = nums.size();

    while(start<=end){
        int mid  = end + (start - end)/2;

        if(nums[mid] > nums[mid-1] && nums[mid] < nums[mid+1]){
            return mid;
        }
        else if(nums[mid+1] > nums[mid]){

            end  = mid + 1;

        }
        else{
            start = mid - 1;
        }
        
    }

    return -1;
}

int main()
{
    vector <int> nums = {3,4};

    cout<<Peek(nums);

    return 0;
}