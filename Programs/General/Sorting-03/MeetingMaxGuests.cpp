#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxGuest(vector <int>&  arr , vector <int>& dep , int n){

    sort(arr.begin() , arr.end());
    sort(dep.begin() , dep.end());
    

    int i = 1 , j = 0 , res = 1 , curr = 1;

    while(i < n && j <n){
        if(arr[i] <= dep[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }

        res = max(res,curr);
    }

    return res;

}

int main()
{


    vector <int> arr = {900,940};
    vector <int> dep = {1000,1030};

    cout<<maxGuest(arr , dep , 2);
    
    return 0;
}