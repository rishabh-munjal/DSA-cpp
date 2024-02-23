/*Given an unsorted array A of size N that contains only non-negative integers, 
find a continuous sub-array which adds to a given number S.*/


//approach -> slide throught the arrya if the result gets bigger remove the first index to achieve continuious indices


#include <iostream>
#include <vector>
using namespace std;

void SubarraySum(vector <int> &nums , int S){

    vector <int> Result;
    int currentSum = 0;
    int start = 0;

    //SLIDING WINDOW

    for(int i = 0 ; i<nums.size() ; i++){

        currentSum = currentSum + nums[i];

        if(currentSum == S){
            Result.push_back(start);
            Result.push_back(i);
            break;
        }
        while(currentSum > S ){

            currentSum = currentSum - nums[start];
            start++;
        }

    }

    if(Result.size() == 0){
        cout<<"Subarray not found"<<endl;
    }
    else {
        cout << "Subarray found from index " << Result[0] << " to " << Result[1] << endl;
    }

}

int main()
{
    vector <int> nums = {1,2,3,4,5,6,7,8,9,10};
    int S = 15;
    
    SubarraySum(nums , S);

    
    return 0;
}