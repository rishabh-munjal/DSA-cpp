//Program to remove Duplicates from a Sorted array

#include <iostream>
using namespace std;

void filter(int arr[] , int n){
    
    int res = 1;

    for (int i = 0; i < n; i++)     //using res shifted the elements
    {
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }

    for (int i = 0; i < res; i++)
    {
        cout<<arr[i];
    }
    
    return ;
      
}

int main()
{
    int arr[5] = {1,2,3,4,4};

    filter(arr,5);

    return 0;
}