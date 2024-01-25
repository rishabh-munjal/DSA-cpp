// Check if a number is power of 2

#include <iostream>
#include <bit>

using namespace std;

void check(int n){

    int count = 0;

    while(n>0){

        if((1&n)==1){
            count++;
        }

        n=n>>1;
    }

    if(count>1){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }

}

int main()
{
    int n;
    cout<<"Enter the number N ";
    cin>>n;

    check(n);
    return 0;
}