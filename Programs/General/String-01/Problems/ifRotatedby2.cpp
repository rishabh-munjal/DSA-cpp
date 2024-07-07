/*Given two strings a and b. The task is to find
 if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.*/

 #include<bits/stdc++.h>
 using namespace std;


 bool isRotated(string a , string b){

    //rotating a by 2 1st clockwise and then anticlockwise then comparing with b

    rotate(b.begin() , b.begin() + 2 , b.end());

   if(b == a){
      return true;
   }

   rotate(b.rbegin() , b.rbegin() + 4 , b.rend());

   if(b == a){
      return true;
   }

   return false;
   
 }

 int main(){

    string a = "geeksforgeeks";
    string b = "geeksgeeksfor";

    cout<<isRotated(a,b);


    return 0;
 }