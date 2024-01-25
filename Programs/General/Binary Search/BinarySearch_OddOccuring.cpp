//finding the odd occuring element using binary search

#include<iostream>
#include<vector>
using namespace std;

int ans;

int OddOccuring(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(arr[mid-1]!=arr[mid] && arr[mid+1]!=arr[mid])
        {
            ans=mid;
        }
        if(arr)
        {
            //INdex approach he lagegi baad me karunga
            
        }
    }
}

int main()
{   
    vector<int> arr = {1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40, 13, 13};

    ans=OddOccuring(arr);

    cout<<"The odd occuring is:- "ans;

    return  0;
}