//intersection of two unsorted array

#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    vector <int> nums1 = {10 , 15 , 20 , 15 , 30 , 30 ,5};
    vector<int> nums2 = {30 , 5, 30 , 80};

    unordered_map <int,int> m;

    int res = 0;

    

    for(int x : nums1){
        m[x]++;
    }

    for (int x : nums2) {
        if (m[x] > 0) {
            res++;
            m[x] = 0; // Set to 0 to avoid counting duplicates
        }
    }

    cout<<res;




    return 0;
}