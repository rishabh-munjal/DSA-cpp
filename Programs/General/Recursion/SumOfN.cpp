//sum of first n natural numbers using recursion

#include <iostream>
using namespace std;

void sumof(int n){

    sumof(n-1);


    

}


int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;

    sumof(n);
    return 0;
}