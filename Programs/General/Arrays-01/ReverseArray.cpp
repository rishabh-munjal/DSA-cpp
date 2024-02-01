//program to reverse an array

#include <iostream>
using namespace std;

int rotate(int arr[] , int n){

    int low = 0;
    int high = n-1;

    while(low<high){            //swappee using low and high
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }

    return arr[n];
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    rotate(arr,5);

    for(int i=0 ; i<5 ; i++){
        cout<<arr[i];
    }

    return 0;
}