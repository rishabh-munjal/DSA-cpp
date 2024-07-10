/*Given a string str and another string patt. 
Find the character in patt that is present at the minimum index in str
. If no character of patt is present in str then print ‘No character present*/

#include<bits/stdc++.h>
using namespace std;

//Approach --> Play with Index

char minIndexChar(string str , string patt){

    int charIndex[256];
    fill(charIndex , charIndex + 256 , -1);
    
    for(int i = 0 ; i < str.length() ; ++i){

        if(charIndex[str[i]] == -1){
            charIndex[str[i]] = i;
        }

    }

    int min = INT_MIN;
    char result = '\0';

    //DOUBT
}
int main(){

    string str = "geeksforgeeks";
    string patt = "set";

    cout<<minIndexChar(str , patt);
    


    return 0;
}