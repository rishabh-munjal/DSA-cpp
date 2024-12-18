/*Given an array arr[] of N integers in which elements may be repeating several times.
  Also, a positive number K is given and the task is to find sum of total frequencies of K most occurring elements

Note: The value of K is guaranteed to be less than or equal to the number of distinct elements in arr.

Example 1:

Input:
N = 8
arr[] = {3,1,4,4,5,2,6,1}
K = 2
Output: 4
Explanation: Since, 4 and 1 are 2 most
occurring elements in the array with
their frequencies as 2, 2. So total
frequency is 2 + 2 = 4.
Example 2:

Input:
N = 8
arr[] = {3,3,3,4,1,1,6,1}
K = 2
Output: 6
Explanation: Since, 3 and 1 are most
occurring elements in the array with
frequencies 3, 3 respectively. So,
total frequency is 6.
Your Task:
Complete the function kMostFrequent() whic returns the frequencies of K most occuring elements.

Constraints:
1 <= N <= 107
1 <= K <= N
1 <= arr[i] <= 106

Expected Time Complexity : O(N)
Expected Auxilliary Space: O(N)*/


#include<bits/stdc++.h>
using namespace std;

void KMostFrequent(vector<int>nums , int n , int k){
    
    map<int,int> numsFreq;
    int res  = 0;

    for(int num : nums){
        numsFreq[num]++;
    }

    for(int i = 0 ; i < k ; i++){
        auto it = numsFreq.begin();

        res += it->second;
        it++;

    }

    cout<<"Result : "<<res<<endl;
}

int main(){
    vector<int> nums = {3,1,4,4,5,2,6,1};
    int n = 8;
    int k = 2;

    KMostFrequent(nums , n , k);

}