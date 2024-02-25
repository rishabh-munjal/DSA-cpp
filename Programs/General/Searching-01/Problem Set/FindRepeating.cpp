/*Given an array arr[] of N positive integers, where elements are consecutive (sorted). 
Also, there is a single element which is repeating X (any variable) number of times. 
Now, the task is to find the element which is repeated and number of times it is repeated.*/

#include <iostream>
#include <vector>
using namespace std;

void FindRepeating(vector <int> nums){

    int start = 0 ; 
    int end = nums.size() - 1;

    while(start < end){
        int mid = (start + end)/2;

        if(nums[mid] >= (nums[0] + mid)){
            start = mid + 1;
        }

        else{
            end = mid;      
        }
    }

    cout << "The repeating element is " << nums[start] << " and it is repeated " << (end - start + 1) << " times." << endl;

}
int main()
{
    vector <int> nums = {1 , 2 , 3 , 3 , 4};

    FindRepeating(nums);
    
    return 0;
}
