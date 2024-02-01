//prgram to check if an array is sorted

#include <iostream>
using namespace std;

bool isSorted(int arr[] , int n){

    bool result = true;

    for(int i=0 ; i<n-1 ; i++){        //basic loop checking adjacent elements
        if(arr[i] > arr[i+1]){

            result = false;
        }
    }

    return result;

}

int main()
{
    int arr[5] = {1,2,3,6,5};

    cout<<isSorted(arr,5);

    return 0;
}