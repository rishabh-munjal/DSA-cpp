#include<iostream>
#include<vector>
using namespace std;

int ans;

int pivot(vector<int> arr){
    
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {

        if(start==end)
        {
            ans=start;
        }
        if(mid<=e && arr[mid]>arr[mid+1])
        {
            return mid;
        }
         if(mid-1>=s && arr[mid]<arr[mid-1])
        {
            return mid-1;
        }

        if(arr[s]>arr[mid])
        {
            end =mid-1;
        }
        else
        {
            start =mid+!;
        }
        mid = start + (end - start)/2;

    }   

    return ans;
}

int main(){   

    vector<int> arr {9, 10, 2, 4, 6, 8};

    ans = pivot(arr);

    cout << ans;
    return 0;
}
