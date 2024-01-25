//program to find the factorial of a number

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

    cout<<factorial(n);

    return 0;
}