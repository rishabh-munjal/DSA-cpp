//Check if a string is palindrome or not

#include<bits/stdc++.h>
using namespace std;


//Naive Approach -> It involves reversing the string and rechecking with the original string
bool isPal(string str){

    string rev = str;
    reverse(rev.begin() , rev.end());

    return(rev == str);
}

//Efficient Approach -> it is the two pointwe approach , we compare start and end and move inside if same 
//return false if founc different

bool isPalEff(string str){
    int start = 0;
    int end = str.length() - 1;

    while(start <= end){
        if(str[start] != str[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }

    return true;

    
}

int main()
{
    string str = "ABABA";

    cout<<isPal(str);


    return 0;
}