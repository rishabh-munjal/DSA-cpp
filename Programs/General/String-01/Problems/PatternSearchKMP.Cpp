/*Given a string S and a pattern P of all lowercase characters.
 The task is to check if the pattern exists in the string or not.*/

#include<bits/stdc++.h>
using namespace std;

bool kmpSearch(string S , string P){

    bool result = true;

    int s = S.length();
    int p = P.length();

    for(int i = 0 ; i < s ; i++){
        if(S.substr(i,p) == P){
            return true;
        }
    }

    return false;

}
int main(){

    string S  = "aabaacaadaabaaba" ;
    string P = "aaaab";

    cout<<kmpSearch(S , P);

    return 0;

}