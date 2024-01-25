//program to check if a string is palindrome or not using recursion

#include <iostream>
#include <string>

using namespace std;

bool ispalindrome(string mystring , int start ,  int end ){

    if(start >= end){
        return true;
    }

    return (mystring[start] == mystring[end]) && ispalindrome(mystring , start+ 1 , end-1);

}

int main(){
    string mystring = "abba";
    int start = 0;
    int end  = size(mystring) - 1;

    ispalindrome(mystring , start ,  end);

    return 0;
}