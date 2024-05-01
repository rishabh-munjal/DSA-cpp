//write a c++ program to segregate Positives and Negatives in an array
//Hint --> Horare partition algorithm

#include <iostream>
#include <vector>

using namespace std;

void Segregate(vector <int>& nums){

    int l = 0;
    int h = nums.size();

    int pivot = nums[l];
    int i =  l-1;
    int j = h+1;

    while(true){
        do{
            i++;
        }
        while(nums[i] < 0 );
        
        do{
            j--;
        }
        while(nums[j] > 0 );

        if(i>=j){
            break; 
        }

        swap(nums[i] , nums[j]);
    }


}

int main()
{
    vector<int> nums = {-12 , -10 , 1 , 5 , 3};

    Segregate(nums);

    for(int i=0 ; i <nums.size() ; i ++){
        cout<<nums[i]<<" ";
    }


    return 0;
}