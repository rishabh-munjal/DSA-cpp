/*Given a sorted array arr[] of size N without duplicates, 
and given a value x. Floor of x is defined as the largest element K in arr[] 
such that K is smaller than or equal to x. Find the index of K(0-based indexing).*/

#include <iostream>
#include <vector>
using namespace std;

int findFloor(vector <int> nums , int x){
    int start = 0;
    int end = nums.size();

    while(start <= end){
        int mid = end + (start - end)/2;
                                                                        //Handling outer cases **
        if(nums[mid] < x && nums[mid+1] > x){
            return mid;
        }
        else if(nums[mid] > x){

            end = mid - 1;

        }
        else{
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector <int> nums = {1,2,8,10,11,12,19};
    int x = 20;

    cout<<findFloor(nums , x);
    return 0;
}