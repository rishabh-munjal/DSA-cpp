#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> wave(vector <int>&nums){
    // 1 0 3 2 5 4  7 6
    //using swap function to obtain the desired results


    for(int i=0 ; i<nums.size()-1 ; i = i+2){

        swap(nums[i] , nums[i+1]);      
    }

    return nums;
}

int main()
{
    vector <int> nums = {2,4,7,8,9,10};

    wave(nums);

    for(int i=0 ; i<nums.size() ; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}