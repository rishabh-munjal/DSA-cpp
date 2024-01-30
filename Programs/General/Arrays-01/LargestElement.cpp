//program that returns largest element in an array

#include <iostream>
using namespace std;

int getlargest(int arr[] , int n){
    
    int max = 0;

    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[max]){
            max = i;
        }
    }

    return max;
    
}

int main()
{
    int arr[5] = {65,78,988,87,78};

    cout<<getlargest(arr,5);


    return 0;
}