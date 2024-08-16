/*Given two strings s1 and s2.
 The task is to check if s2 is a rotated version of the string s1.
 The characters in the strings are in lowercase.*/

 #include<bits/stdc++.h>
 using namespace std;

 bool areRotated(string a , string b){

    /*  int len = a.length();
        int i = 0;

    while(i < len){
        rotate(a.begin() , a.begin() + 1 , a.end());

        if(a == b){
            return true;
        }
        else{
            i++;
            continue;
        }
        
    }

    return false;*/

//E F F I C I E N T 

    return ((a.length() == b.length()) && ((a+b).find(b) != string::npos));


 }

 int main(){

    string a = "mightandmagic";
    string b = "andmagicmzgth";

    cout<<areRotated(a,b);


    return 0;
 }