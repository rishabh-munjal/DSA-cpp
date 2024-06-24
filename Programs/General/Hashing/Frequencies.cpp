#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     vector <int> nums = {15 , 12 ,13 , 12 , 13, 13, 18};
     unordered_map<int,int> m ;
     for(int x : nums){
        m[x]++;
     }

     for(auto e : m){

        cout<<e.first<<" "<<e.second<<endl;

     }


    return 0;
}