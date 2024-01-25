//program to find the trailing zeros of factorial of a number

#include <iostream>
using namespace std;

int factorial(int n){

    int fact = 1;

    for(int i=n; i>0; i--){
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    cout<<"Enter the number N";
    cin>>n;

    int fact = factorial(n);

    int m = fact % 10;
    int count=0;

    while(m==0){
        count++;
        fact = fact /10;
        m = fact % 10;
    }

    cout<<count;

    return 0;
}
