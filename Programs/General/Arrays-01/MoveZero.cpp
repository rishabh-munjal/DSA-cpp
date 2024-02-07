//program to move zeros to the end 

#include <iostream>
using namespace std;

void movezeros(int arr[] , int n){

    int res = 0;

    for(int i=0 ; i<n ; i++){           //using res  shifted elemnts and later printed
        if(arr[i]!=0){

            arr[res] = arr[i];
            res++;

        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}

int main()
{
    int arr[5] = {0,1,0,3,12};

    movezeros(arr,5);


    return 0;
}