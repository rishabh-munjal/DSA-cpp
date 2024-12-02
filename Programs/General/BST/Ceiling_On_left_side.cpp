#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void printCeiling(vector<int> arr , int n){
    //NAIVE APPROACH -> TC - O(N^2) SC - O(N) -> THis would including traversing array and find the ceiling using double for loop
    

    //OPTIMIZED -> O(NlogN)
    set<int> s;
    s.insert(arr[0]);

    cout<<"-1 ";

    for(int i = 1; i < n ; i++){
        
        auto it = s.lower_bound(arr[i]);

        if(it != s.end()){
            cout<< *it <<" ";
        }else{
            cout<< "-1 ";
        }

        s.insert(arr[i]);
    }
}

int main()
{
    vector<int> arr = {2 , 8 , 30 , 15 ,25 , 12};
    int n = arr.size();
    
    printCeiling(arr , n);
    
    return 0;
}