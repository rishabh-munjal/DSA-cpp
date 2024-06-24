//subarray with sum given
//if exits return true
//else false

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {55, 18 , 556 , 513 , 53, 51};
    int sum = 22;

    unordered_set<int> s;
    int preSum = 0;

    for(int x : nums){
        preSum += x;

        if(preSum == sum){
            cout<<"true";
            return 0;
        }
        if(s.find(preSum - sum) != s.end()){
            cout<<"true";
            return 0;
        }

        s.insert(preSum);
    }


    return 0;


}