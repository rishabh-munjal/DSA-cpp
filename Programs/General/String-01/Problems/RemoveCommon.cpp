/*Given two strings s1 and s2.
 Modify both the strings such that all the common characters of s1 and s2 
 are to be removed and the uncommon characters of s1 and s2 are to be concatenated.
Note: If all characters are removed print -1.*/

#include<bits/stdc++.h>
using namespace std;

string concatenateString(string s1 , string s2){
    
    //Approach --> Joining string + and then make a hashmap out of it
    //But it would not assure the fixed series every time 

    string s1s2 = s1 + s2;  
    unordered_map<char,int> s;

    string result;

    for(char x : s1s2){
        s[x]++;
    }

    for(auto it = s.begin() ; it != s.end() ; ++it){
        if(it->second == 1){
            result.push_back(it->first);
        }
    }

    if (result.empty()) {
        return "-1";
    }


    return result;
}
int main(){

    string s1 = "aacdb";
    string s2 = "gafd";

    cout<<concatenateString(s1 ,s2);


    return 0;
}
