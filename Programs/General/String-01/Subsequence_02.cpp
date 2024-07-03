//Check if string s1 is the subsequence of string s2

#include<bits/stdc++.h>
using namespace std;

//Appraoch 1 -> using pointers i and j on both strings and comparing each other

bool isSub(string s1 , string s2){

    int j = 0;
    int i = 0;

    while(i < s1.length()){
        if(s1[j] = s2[i]){
            j++;
            i++;
        }
        else{
            i++;
        }
    }


    int temp = s2.length() - 1;

    return(j == temp);
}

int main(){

    string s1  = "ABCD";
    string s2  = "ABCD";

    cout<<isSub(s1 , s2);

    return 0;
}