//program to find second largest element in an arrya

#include <iostream>
using namespace std;

int GetSecondLargest(int arr[] , int n){
    int Largest = -1;
    int SecondLargest = -1;

    for (int i = 0; i < n; i++)
    {                                       //Error
        if(arr[i]>arr[Largest]){
            
            SecondLargest = Largest;
            Largest = i;
        }
    }

    return SecondLargest;
}

int main()
{
    int arr[5] = {5,4,3,2,1};

    cout<<GetSecondLargest(arr,5);
    
    return 0;
}