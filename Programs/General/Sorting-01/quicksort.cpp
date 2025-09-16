#include <bits/stdc++.h>
using namespace std;


void quickSort(vector<int>& arr , int low , int high){

    if(low >= high) return;
    int pi = parition(arr , low , high);

    quicksort(arr, low , pi);
    quicksort(arr , pi + 1 , high);

    

}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // pick last element as pivot
    int i = low - 1;        // index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);  // place smaller element before pivot
        }
    }
    swap(arr[i + 1], arr[high]);   // put pivot in correct place
    return i + 1;
}

int main()
{

    vector<int> arr = {5, 2, 9, 1, 6};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;


    
    return 0;
}