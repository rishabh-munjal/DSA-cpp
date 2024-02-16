#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector <int> nums , int target , int start , int end){
    

    while(start <= end){

        int mid = end + (start - end)/2;

        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid  +1;
        }
        else{
            end = mid -1;
        }

    }

    return -1;
}

int Search(vector <int> nums , int target){
    int start = 0;
    int i = 1;

    while(nums[i] < target){
        i = i*2;
    }
    if(nums[i]==target){
        return i;
    }
    else{
        return BinarySearch(nums , target , i/2 + 1 , i -1 );
    }
    
}

int main()
{
    vector <int> nums = {1 , 10 , 15 , 20 , 40 , 60 , 80 , 100 , 200 , 500 , 1000};
    int target = 100;

    cout<<Search(nums , target);
    return 0;
}