//Given an unsorted array arr[] of size N, rotate it by 
//D elements in the counter-clockwise direction. 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> nums  = {2,4,6,8,10,12,14,16,18,20};
    int D = 3;

    reverse(nums.begin() , nums.end());
    reverse(nums.begin() , nums.begin() + (nums.size() - D));
    reverse(nums.begin() + (nums.size() - D) , nums.end());

    for(int i=0 ; i<nums.size() ;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}