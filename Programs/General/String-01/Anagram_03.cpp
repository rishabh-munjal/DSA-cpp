//Check if the string is anagram or not
//Anagram --> both the string s1 and s2 should have same letters with equal repetition
//S I L E N T <--> L I S T E N

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1 ,  string s2){   //-->Naive Approach

    if(s1.length() != s2.length()){
        return false;
    }

    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());

    return (s1==s2);

}

bool isAnagramEff(string s1 , string s2){      //--> Efficient approach using hashmaps;,

    if(s1.length() != s2.length()){
        return false;
    }

    unordered_map <int,int> h;

    for(int i = 0 ; i < s1.length() ; i++ ){

        h[s1[i]]++;
        h[s2[i]]--;

    }

    for(auto it : h){

        if(it.second != 0){
            return false;
        }
        
    }

    return true;

}




int main(){

    string s1 = "AAACB";
    string s2 = "CABDA";

    cout<<isAnagramEff(s1,s2);

    return 0;
}