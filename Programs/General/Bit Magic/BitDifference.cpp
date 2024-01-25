//Count the no of bits to be changed to get the desired number

#include <iostream>
#include <bit>

using namespace std;

void countBitsFlip(int A , int B){

    int count = 0;

    int C = A ^ B;

    while(C>0){
        if((C&1)==1){
            count++;

        }

        C = C>>1;
    }

    cout<<count;
}

int main()
{
    int A,B;
    cout<<"Enter the number A and B respectively";
    cin>>A>>B;
    
    countBitsFlip(A,B);

    return 0;
}