//cpp implementation of lomuto partition algorithm 

#include <iostream>
#include <vector>
using namespace std;

int lPartition(vector <int>& nums ,  int l , int h){

    int pivot = nums[h];
    int i = l - 1;

    for(int j = l ; j < h-1 ; j++){
        if(nums[j] < pivot){
            i++;
            swap(nums[i] , nums[j]);
        }
    }

    swap(nums[i+1] , nums[h]);
    return i+1;
}

void qsort(vector <int>& nums , int l , int h){
    if(l<h){
        int p = lPartition(nums , l ,h);
        qsort(nums , l , p-1);
        qsort(nums , p+1 , h);
    }
}

int main()
{
    vector <int> nums = {5 , 4,3 ,7, 1}; 

    qsort(nums , 0 , 4);

    for(int i = 0 ; i<nums.size() ; i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}