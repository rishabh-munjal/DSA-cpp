/*Given a string check if it is Pangram or not.
 A pangram is a sentence containing every letter in the English Alphabet.*/



#include<bits/stdc++.h>
using namespace std;

const int CHAR = 26;

bool isPanagram(string S){

    if(S.length() < 26){
        return false;
    }

    //Approach 1 --> using count array;

    int present[CHAR];
    fill(present , present+CHAR , -1);

    for(int i = 0 ; i < S.length() ; i++){
        int fi = present[S[i]];
    }
}

int main(){
    string S = "Bawds jog, flick quartz, vex nymph";
    cout<<isPanagram(S);
    return 0;
}