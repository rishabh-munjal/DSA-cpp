//Find the subarray with sum  = 0  in the given nums

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {-3 ,4 , -3 , -1 , 1};

    unordered_set<int> h;

    int prefixsum = 0;

    for(int x : nums){
        prefixsum += x;
        if(h.find(prefixsum) != h.end()){
            cout<<"true";
            return 0;
        }
        if(prefixsum == 0){
             cout<<"true";
            return 0;           
        }

        h.insert(prefixsum);
    }

    
    
    return 0;
}