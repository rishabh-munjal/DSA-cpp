#include <iostream>

const int MAX_SIZE = 1000; // Maximum size of the array

void insertElement(int arr[], int& sizeOfArray, int element) {
    
    if (sizeOfArray >= MAX_SIZE) {
        std::cout << "Array is full, cannot insert more elements." << std::endl;
        return;
    }
    

    arr[sizeOfArray] = element;
    sizeOfArray++; 
}

int main() {
    int arr[MAX_SIZE];
    int sizeOfArray;

    sizeOfArray = 5; 
    

    std::cout << "Array before insertion: ";
    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    int element = 10;


    insertElement(arr, sizeOfArray, element);

    std::cout << "Array after insertion: ";
    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
