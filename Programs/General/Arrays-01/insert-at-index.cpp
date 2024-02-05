#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;

void insertAtIndex(int arr[] , int& size , int index , int value){    //pass by refrence -->
 
    int i;

    for(i=size;  i>index ; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = value;
    size++;
}

int main()
{
    int arr[MAX_SIZE] = {1,2,3,4,5};
    int size = 5;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    int index = 2; 
    int value = 10;

    insertAtIndex(arr, size, index, value);

    cout<<endl;
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    
    return 0;
}