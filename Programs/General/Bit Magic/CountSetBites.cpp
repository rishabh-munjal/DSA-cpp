//program to find no of 1 in positive integer

#include <iostream>
#include <bit>
using namespace std;

void CountSet(int n){
    
    int count = 0; 

    while(n>0){

        if((1 & n)==1){
            count++;
        }

        n = n>>1;
    }

    cout<<count;
}

int main()
{
    unsigned int n;
    cout<<"Enter a positive integer n";
    cin>>n;

    CountSet(n);
    return 0;
}