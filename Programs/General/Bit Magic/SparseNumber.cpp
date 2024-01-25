//Sparse Number of not

#include <iostream>
#include <bit>

using namespace std;

bool Sparse(int n){

    while(n!=0){

        int a = n;

        if((a&1) ==1 && ((a>>1)&1)==1){

            return true; 
        
        }
        else{
            n = n>>1;
        }
    }

    return false;

}

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;

    cout<<Sparse(n);
    return 0;
}