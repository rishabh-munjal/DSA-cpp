//Pair with given sum in an unsorted array exisits then return true

#include <bits/stdc++.h>

using namespace std;
int main(){

    vector<int> nums = {11 , 5 , 6};
    int sum = 10;

    unordered_set<int> s;

    for(int i = 0 ; i < 3 ; i++){
        if(s.find(sum - nums[i]) != s.end()){
            cout<< "true";
        }
        s.insert(nums[i]);
    }

    
    return 0;
}