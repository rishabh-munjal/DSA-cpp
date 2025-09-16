//implementation of selection sort

#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector <int> &nums){
    int n = nums.size();

    for(int i = 0 ; i < n ; i++){
        int m = i;
        for(int j = i + 1 ; j < n ; j++){
            if(nums[j] < nums[m]){
                m = j;
            }
        }

        swap(nums[i] , nums[m]);
    }

    return;

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