#include <iostream>
using namespace std;

// Binary Search

// using search function to find a particular range

int Search(int arr[], int target) {
    int start = 0;
    int i = 1;

    while (arr[i] < target) {
        i = i * 2;
    }

    if (arr[i] == target) {
        return i;
    } else {
        return binary_search(arr, target, i / 2 + 1, i - 1); 
    }
}

int binary_search(int arr[], int target, int start, int end) {
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int size, target;
    cout << "Enter the size for the array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }

    cout << "Enter the element to be found: ";
    cin >> target;

    int target_index = binary_search(arr, target, 0, size - 1);

    if (target_index == -1) { // Corrected the condition to check if element is found
        cout << "Element Not Found!!";
    } else {
        cout << "Element Found at index: " << target_index;
    }

    return 0;
}
