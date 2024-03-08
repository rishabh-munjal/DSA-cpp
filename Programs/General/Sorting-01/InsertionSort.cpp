//implementation of insertion sort

#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector <int> &nums){
    int n = nums.size() ; 

    for(int i = 1 ; i<n ; i++){
        int key = nums[i];
        int j = i - 1;

        while(j >=0 && nums[j] > key){
            nums[j+1] = nums[j];
            j--;
        }

        nums[j+1] = key;
    }
}

int main()
{
    vector<int> nums = {2, 6, 5, 4, 6, 4};
    InsertionSort(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
    return 0;
}