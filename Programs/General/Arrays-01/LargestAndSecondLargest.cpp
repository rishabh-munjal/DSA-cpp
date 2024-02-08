//Program to find the Max and Second Max

#include <iostream>
#include <vector>
using namespace std;

int FindMax_SecondMax(vector <int> nums){

    int max = 0;
    int SecondMax = 0;

    for(int i=0 ; i<nums.size() ; i++){               //ERROR
        if(nums[i] > nums[max]){
            max = i;
        }
        if(nums[i] > nums[SecondMax] && nums[i] < nums[max]){
            SecondMax = i;
        }
    }


}

int main()
{
    vector <int> nums = {1,2,3,4,5};

    cout<<FindMax_SecondMax(nums);

    return 0;
}