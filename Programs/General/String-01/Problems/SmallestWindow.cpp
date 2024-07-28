/*Given two strings S and P. 
Find the smallest window in the S consisting of all the characters of P.*/

#include<bits/stdc++.h>
using namespace std;

bool containsAllLetters(const std::string& s1, const std::string& s2) {
    // Assuming only lowercase letters
    std::vector<int> count1(26, 0), count2(26, 0);

    // Count the frequency of each letter in s1
    for (char c : s1) {
        count1[c - 'a']++;
    }

    // Count the frequency of each letter in s2
    for (char c : s2) {
        count2[c - 'a']++;
    }

    // Check if s1 contains at least as many of each letter as s2
    for (int i = 0; i < 26; ++i) {
        if (count1[i] < count2[i]) {
            return false;
        }
    }
    return true;
}

string smallestWindow(string S , string P){
    //two pointer



    int i = 0 ;
    int j  = S.length();

    string result(S.substr(i,j));



    bool check = true;

    while(check){
        if(containsAllLetters(result , P)){
            i++;
            j--;
        }
        else{
            check = false;
        }
        result = (S.substr(i,j));
    }


    return result;

}
int main(){

    string S = "timetopractice";
    string P = "toc";

    cout<<smallestWindow(S , P);


    return 0;
}