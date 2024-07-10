 /*Given a string S of lowercase alphabets, 
 check if it is isogram or not.
---> An Isogram is a string in which no letter occurs more than once.*/
 
 
 #include<bits/stdc++.h>
 using namespace std;

 bool isIsogram(string s){
   //approach --> hashmaps

   unordered_map<char,int> h;

   for(int i : s){
      h[i]++;
   }

   for(auto it = h.begin() ; it != h.end() ; ++it){
      if(it->second > 1){
         return false;
      }
   }

   return true;
 }

 int main(){

    string s = "geeks";

    cout<<isIsogram(s);


    return 0;
 }