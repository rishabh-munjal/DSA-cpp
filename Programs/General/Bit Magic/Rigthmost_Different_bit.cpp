//program to find the right most different bit

#include <iostream>
#include <bit>

using namespace std;

void RightMostDifferentBit(int n1,int n2){

    int counter = 1 ;

    while((n1&1)==(n2&1)){

        counter++;
        n1 >>= 1;
        n2 >>= 1;
        
    }

    cout<<counter;
}

int main()
{
    int n1,n2;

    cout<<"Enter the n1 and n2 respectively"<<endl;
    cin>>n1>>n2;

    RightMostDifferentBit(n1,n2);

    return 0;
}