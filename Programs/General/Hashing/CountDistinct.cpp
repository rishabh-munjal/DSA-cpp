//Write a CPP program to find the no of distinct elements using Hash maps
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include<set>


using namespace std;

int main()
{
    vector <int> nums = {15 , 12 ,13 , 12 , 13, 13, 18};

    unordered_set<int> count; 

    for(int i = 0 ; i < 7 ; i++) {
        count.insert(nums[i]);

    }

    cout<<count.size();


    return 0;
}