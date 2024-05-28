#include <iostream>
#include <vector>
using namespace std;

void snake(const vector<vector<int>>& arr) {
    int r = arr.size();
    int c = arr[0].size();
    
    for (int i = 0; i < r; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < c; j++) {
                cout << arr[i][j] << " ";  // Add a space for better readability
            }
        } else {
            for (int j = c - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";  // Add a space for better readability
            }
        }
        cout << endl;  // Add a newline to separate the rows
    }
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    snake(arr);

    return 0;
}
