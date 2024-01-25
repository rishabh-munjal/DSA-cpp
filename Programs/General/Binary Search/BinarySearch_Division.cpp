//division using binary search

#include<iostream>

using namespace std;

int ans;

int solve(int dividend,int divisor)
{
    int start = 0;
    int end = dividend;
    int mid = start +(end-start)/2;


    while(start<=end)
    {
        if(mid * divisor == dividend)
        {
            return mid;
        }
        if(mid*divisor < dividend)
        {
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
        mid = start +(end-start)/2;
    } 
    return mid;
}

int main()
{

    int dividend = 22;
    int divisor = 7;
    int precision;

    ans = solve(dividend,divisor);

    cout<<ans;

    return 0;
}