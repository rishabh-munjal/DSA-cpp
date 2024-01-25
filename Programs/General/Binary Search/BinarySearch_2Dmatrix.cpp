//application of binary search in 2d matrix

#include<iostream>
using namespace std;

bool binarySearch(int arr[5][4],int target,int rows,int cols)
{   
    int start= 0;
    int end = rows*cols-1;
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        int rowindex = mid/cols;
        int colsindex = mid%cols;
        if(arr[rowindex][colsindex]==target)
        {
            return true;
        }
        if(arr[rowindex][colsindex] > target)
        {
            end = mid -1;
        }
        else
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }

    return false;


}

int main()
{
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}} ;
    int rows = 5;
    int cols = 4;

    int target = 39;

    bool ans = binarySearch(arr,target,rows,cols);

    if(ans)
    {
        cout<<"FOUND";
    }
    else
    {
        cout<<"NOT FOUND!";
    }

 
   return  0;
}