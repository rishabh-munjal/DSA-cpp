//applying binary search in a nearly sorted array

#include<iostream>
#include<vector>

using namespace std;

int ans;

int binarysearch(vector<int> arr,int target)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(arr[mid]==target)
        {
            ans = mid;
        }
        if(arr[mid-1]==target)
        {
            ans = mid-1;
        }
        if(arr[mid+1]==target)
        {
            ans = mid+1;
        }
        else if(arr[mid]<target)
        {
            start = mid + 2;
        }
        else{
            end = mid - 2;
        }
        mid = start + (end - start)/2;
        
    }

    return ans;

}

int main()
{

    vector<int> arr{10,3,40,20,50,80,70};
    int target =80;

    ans = binarysearch(arr,target);

    cout<<"The target is add index:- "<<ans;



    return  0;
}