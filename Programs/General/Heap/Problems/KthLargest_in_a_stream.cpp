/*Given an input stream of n integers, find the kth largest element for each element in the stream.

Example 1:

Input:
k = 4, n = 6
arr[] = {1,2,3,4,5,6}
Output: -1 -1 -1 1 2 3
Explanation: k = 4
For 1, the 4th largest element doesn't
exist so we print -1.
For 2, the 4th largest element doesn't
exist so we print -1.
For 3, the 4th largest element doesn't
exist so we print -1.
For 4, the 4th largest element is 1
{1, 2, 3, 4}
For 5, the 4th largest element is 2
{2, 3, 4 ,5}
For 6, the 4th largest element is 3
{3, 4, 5, 6}

Example 2:

Input:
k = 1, n = 2
arr[] = {3,4}
Output: 3 4 
Your Task:
You are required to complete the method kthLargest() which takes 3 arguments and prints kth largest element -1.*/

#include<bits/stdc++.h>
using namespace std;

void kthLargest(vector<int> arr , int k , int n){
    
    priority_queue<int , vector<int> , greater<int>> pq;

    for(int i = 0 ; i < k - 1 ; i++){
        pq.push(arr[i]);
        cout<<-1<<" ";
    }

    for(int i = k - 1 ; i < arr.size() ; i++){
        cout<<pq.top()<<" ";
        pq.pop();
        pq.push(arr[i]);
    }
}


int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int k = 4;
    int n = 6;

    kthLargest(arr , k , n);


    return 0;
} 