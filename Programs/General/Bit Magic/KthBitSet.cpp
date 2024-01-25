//program to check if the kth bit is set or not 

#include <iostream>
#include <bit>


using namespace std;

void KthBitSet(int n, int k){

    n >>= k;

    if((n&1)==1){
        cout<<k<< "Bit is set";
    }
    else{
        cout<<"Not set";
    }
}

int main()
{

    int n,k;
    cout<<"Enter the value for N & K respectively"<<endl;
    cin>>n>>k;

    KthBitSet(n,k);
    
    return 0;
}