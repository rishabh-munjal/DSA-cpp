// program to find the mean and the median of an array
// mean -> average
// median -> middle element of the sorted array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int FindMean(vector <int> nums){

    int sum = 0;

    for(int i=0 ; i<nums.size() ;i++){

        sum = sum + nums[i];
        
    }

    return sum;
}

int FindMedian(vector <int> nums){

    sort(nums.begin(), nums.end());

    if(nums.size()%2 != 0){  
     //median is middle element
        return nums[nums.size()/2];
        
    }

    if(nums.size()%2 == 0){

        return (nums[nums.size()/2] + nums[nums.size()/2])/2;

    }

    return 0;


}

int main()
{
    vector <int> nums = {1, 2, 19, 28};

    int mean , median;

    //finding mean
    mean  = FindMean(nums)/nums.size();
    cout<<mean<<endl;;

    //finding median

    median = FindMedian(nums);
    cout<<median;

    return 0;
}