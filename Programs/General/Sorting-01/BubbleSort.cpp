#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &nums) {                //Pass By Refrence is important
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {         // Naive Approach On^2 TC
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

//Optimized Solution

void bubbleSortOptimized(vector <int> &nums){           // On^2 theoritically but take less time due to that bool function
    int n = nums.size();

    for(int i = 0 ; i< n - 1; i++){
        bool swapped = false;

        for(int j = 0 ;j< n-i-1 ; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }
}

int main() {
    vector<int> nums = {2, 6, 5, 4, 6, 4};
    bubbleSortOptimized(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
