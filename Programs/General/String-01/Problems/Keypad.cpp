/*You are given a string S of alphabet characters 
and the task is to find its matching decimal representation
 as on the shown keypad. Output the decimal representation 
 corresponding to the string. For ex: if you are given “amazon” 
 then its corresponding decimal representation will be 262966.*/

#include<bits/stdc++.h>
using namespace std;

string printNumber(string S){
    //Apprach 1 --> make a hashmap of no of evetn no and append in a string on the basis of need

    unordered_map<char,int> key = {
        
                {'a' , 2},
                {'b' , 2},
                {'c' , 2},
                {'d' , 3},
                {'e' , 3},
                {'f' , 3},
                {'g' , 4},
                {'h' , 4},
                {'i' , 4},
                {'j' , 5},
                {'k' , 5},
                {'l' , 5},
                {'m' , 6},
                {'n' , 6},
                {'o' , 6},
                {'p' , 7},
                {'q' , 7},
                {'r' , 7},
                {'s' , 7},
                {'t' , 8},
                {'u' , 8},
                {'v' , 8},
                {'w' , 9},
                {'x' , 9},
                {'y' , 9},
                {'z' , 9}

                            };


    string output;

    for (char c : S) {
        output += to_string(key[c]);  //to string converts numerioval value to a string
    }

    return output;

         
}

int main(){

    string S = "geeksforgeeks";

    cout<<printNumber(S);


return 0;
}