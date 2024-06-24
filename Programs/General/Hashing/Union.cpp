//find the union of two arrays 

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    vector <int> nums1 = {10 , 15 , 20 , 15 , 30 , 30 ,5};
    vector<int> nums2 = {30 , 5, 30 , 80};

    unordered_set <int>  s;

    for(int i : nums1){
        s.insert(i);
    }
    for(int i : nums2){
        s.insert(i);
    }

    cout<<s.size();
    
    return 0;
}