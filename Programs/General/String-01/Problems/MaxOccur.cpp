/*Given a string str. 
The task is to find the maximum occurring character in the string str.
 If more than one character occurs the maximum number of time then print the lexicographically smaller character.*/

#include<bits/stdc++.h>
using namespace std;

char maxOccur(string str){

    unordered_map<char,int> h;

    int maxi = INT_MIN ;
    char max;

    for(char i : str){
        h[i]++;
    }

    for(auto it = h.begin() ; it != h.end() ; ++it){

        if(it->second > maxi){
            max = it->first;
            maxi = it->second;
        }
        else if(it->second == maxi){
            if (it->first < max) {  
                max = it->first;
            }
        }
    }

    return max;


}
int main(){

    string str = "testsample";

    cout<<maxOccur(str);




    return 0;
}