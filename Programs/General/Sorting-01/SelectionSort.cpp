//implementation of selection sort

#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector <int> &nums){
    int n = nums.size() ; 

    for(int i=0 ; i < n ; i++){
        
        int min_ind = i;

        for(int j = i+1 ; j<n ; j++){
            if(nums[j] < nums[min_ind]){
                min_ind = j;
            }

            swap(nums[min_ind] , nums[i]);
        }
    }
}

int main()
{
    vector<int> nums = {2, 6, 5, 4, 6, 4};
    SelectionSort(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}