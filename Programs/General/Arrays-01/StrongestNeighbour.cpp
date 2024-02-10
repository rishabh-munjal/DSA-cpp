/*Given an array arr[] of n positive integers. The task is to find the maximum for every adjacent pairs in the array.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> nums = {5, 5};
    vector <int> result;

    for(int i=0 ; i<nums.size()-1 ; i++){

        result.push_back(max(nums[i],nums[i+1]));
        
    }

    for(int i=0; i<result.size() ;i++){
        cout<<result[i];
    }

    return 0;
}