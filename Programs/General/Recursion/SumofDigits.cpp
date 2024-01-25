//program to find sum of digits using Recursion

#include <iostream>
using namespace std;

int sum(int number){

    int digit = number % 10;

    if(digit == 0){
        return  0;
    }

    return digit + sum(number/10);
}

int main()
{
    int number;
    cout<<"Enter the number";
    cin>>number;

    cout<<sum(number);

    return 0;
}