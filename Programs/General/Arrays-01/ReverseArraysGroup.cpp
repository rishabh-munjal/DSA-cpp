//Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> nums {1,2,3,4,5};
    int k=3;

    reverse(nums.begin() , nums.begin() + k);
    reverse(nums.begin()+k , nums.end());

    for(int i=0 ; i<nums.size() ;i++){
        cout<<nums[i];
    }

    return 0;
}