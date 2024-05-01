//write a cpp program to find the min diffrence btween the array
//basic idea is to sort and find the lease adjacent diofference

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMinDiff(vector <int> &nums){

    sort(nums , nums + n);
    int  res = INT_MAX;

    for(int i=0 ; i<n ; i ++){
        res= min(res , nums[i] - nums[i-1]);
    }

    return res;

}

int main()
{
    
    vector <int> nums = { 1 , 8 ,12 , 5 , 18};
    cout<<getMinDiff(nums);
    return 0;
}