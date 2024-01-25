//program to count the number of digits in a number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long n;

    cout<<"Enter the number N";
    cin>>n;

    cout<<floor(log10(n) + 1);
    
    return 0;
}