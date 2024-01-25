// Find the first set bit fromn the right side

#include <iostream>
#include <bit>

using namespace std;

void FirstSet(int n){

    int counter = 1;

    while((n&1) != 1){

        n = n>>1;
        counter++;
    }

    cout<<counter;
}

int main()
{
    int n;
    cout<<"Enter the number N "<<endl;
    cin>>n;

    FirstSet(n);

    return 0;
}