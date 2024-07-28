/*Given two strings A and B, find if A is a subsequence of B. 
A subsequence is a sequence that can be derived from another sequence by deleting some
 elements without changing the order of the remaining elements.*/

#include <bits/stdc++.h>
using namespace std;


bool isSubsequence(string A , string B){
    int a = A.length();
    int b = B.length();


    int i = 0 ;
    int j = 0;

    while(i < a && j < b){
        if(A[i] == B[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
        
    }

    return (i==a);
}
int main()
{

    string A = "AXY";
    string B = "YADXCP";

    cout<<isSubsequence(A , B);
    
    return 0;
}