//Write a c++ program to find the first letter that reoccurs in the string and return its index
//Eg --> Geeksforgeeks -- g is the first element that repeats so o/p is index of g ie 0

#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;


int FirstReoccur(string &str){

    int visited[CHAR];

    fill(visited , visited+CHAR , -1);

    int res = INT_MAX;

    for(int i = 0 ; i < str.length() ; i++ ){

        int fi = visited[str[i]];

        if(fi == -1){
            visited[str[i]] = i;
        }
        else{
            res = min(res , fi);
        }

        return(res == INT_MAX) ? -1 : res;
        
    }

}

int main(){

    string str = "geeksforgeeks";

    cout<<FirstReoccur(str);


    return 0;
}
