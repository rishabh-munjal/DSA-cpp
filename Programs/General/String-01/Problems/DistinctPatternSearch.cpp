/*Given a string S and a pattern P (of distinct characters) consisting of lowercase characters. 
The task is to check if pattern P exists in the given string S or not.
Note : Pattern has distinct characters. There might be repetitions in text.*/

#include<bits/stdc++.h>
using namespace std;

bool Search(string S , string P){

    int n = S.length();
    int m = P.length();

    int start = 0;
    int end = m - 1;

    while(end < n){

        string str(S.substr(start,end));

        if(str == P){
            return true;
        }
        else{
            start++;
            end++;
        }
        
    }

    return false;

}

int main(){

    string S = "abceabcdabceabcd";
    string P = "abcd";

    cout<<Search(S,P);




    return 0;
}