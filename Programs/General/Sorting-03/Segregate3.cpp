//write a cpp program to segregate 3 types of elements
//we use DUTTCH NATIONAL FLAG ALGO [Modified Horare]

#include <iostream>
#include <vector>
using namespace std;

void Sort(vector <int>& nums){
    int l = 0;
    int h = nums.size() - 1;
    int mid = 0;

    while(mid <= h){
        if(nums[mid] == 0){
            swap(nums[l] , nums[mid]);
            l++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid] , nums[h]);
            h--;
        }
    }
}

int main()
{
    vector<int> nums = {0 , 1 , 2 ,1 ,1 , 2};

    Sort(nums);

    for(int i=0 ; i <nums.size() ; i ++){
        cout<<nums[i]<<" ";
    }

    return 0;
}