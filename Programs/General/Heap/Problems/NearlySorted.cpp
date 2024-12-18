#include <iostream>
#include <vector>
#include <queue> // For priority_queue
using namespace std;

void nearlySorted(vector<int>& arr, int k) {
    // Min-heap to store k+1 elements
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Push the first k+1 elements into the min-heap
    for (int i = 0; i <= k && i < arr.size(); i++) {
        minHeap.push(arr[i]);
    }

    int index = 0; // To keep track of the current position in the sorted array

    // Process the remaining elements in the array
    for (int i = k + 1; i < arr.size(); i++) {
        // Place the smallest element in its correct position
        arr[index++] = minHeap.top();
        minHeap.pop();

        // Push the next element from the array into the min-heap
        minHeap.push(arr[i]);
    }

    // Extract the remaining elements from the heap
    while (!minHeap.empty()) {
        arr[index++] = minHeap.top();
        minHeap.pop();
    }
}

int main() {
    vector<int> arr = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;

    nearlySorted(arr, k);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
