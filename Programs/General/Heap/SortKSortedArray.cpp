#include <bits/stdc++.h>
using namespace std;

// Function to sort an almost sorted array where each element is at most k positions away from its sorted position
void sortk(vector<int>& arr, int k) {

    // Min-heap to manage the k + 1 elements
    priority_queue<int, vector<int>, greater<int>> pq;

    int n = arr.size();

    // Add the first k + 1 elements to the priority queue
    for (int i = 0; i <= k && i < n; i++) {
        pq.push(arr[i]);
    }
    
    int index = 0;

    // For the rest of the elements in the array
    for (int i = k + 1; i < n; i++) {
        // Place the smallest element in its correct position
        arr[index++] = pq.top();
        pq.pop();

        // Push the current element into the priority queue
        pq.push(arr[i]);
    }

    // Pop all remaining elements from the priority queue
    while (!pq.empty()) {
        arr[index++] = pq.top();
        pq.pop();
    }

    // Print the sorted array
    for (int a : arr) {
        cout << a << " ";
    }
    cout << endl; // Endline for better formatting
}

int main() {   
    // Input array
    vector<int> arr = {9, 8, 7, 18, 19, 17};
    int k = 2;

    

    // Call the sorting function
    sortk(arr, k);
    
    return 0;
}
