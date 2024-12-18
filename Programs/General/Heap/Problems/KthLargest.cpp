//{ Driver Code Starts
#include <bits/stdc++.h>
#include <queue>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        // Your code here
        
        
         priority_queue <int, vector<int>, greater<int> > pq; 
        
        for(int i = 0 ; i < k ; i++){
            pq.push(arr[i]);
        }
        
        for(int i = k ; i < arr.size() ; i++){
            if(arr[i] > pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        
        return pq.top();
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.KthLargest(arr, k) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends