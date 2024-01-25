//Searching in a rotated & sorted array

#include<iostream>
#include<vector>
using namespace std;

int ans;

int BinarySearch(vector<int> arr){
    int start = 0;
    int end  = arr.size()-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        //F off
    }
}

int main(){

    vector<int> arr {9,10,2,4,6,8};

    ans = BinarySearch(arr);

    cout<<ans;

    return 0;
}
