#include <iostream>
#include <bit>

using namespace std;


void KthBit(int n,int k){

    if((1 << (k-1)) & n !=0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}

int main()
{
    int n,k;
    cout<<"Enter the number N and K ";
    cin>>n>>k;

    KthBit(n,k);

    return 0;
}