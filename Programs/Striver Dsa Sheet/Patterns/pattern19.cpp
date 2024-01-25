// **********
// ****  ****
// ***    ***
// **      **
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<2*n ; i++){

        if(i<=n){
            for(int j=n; j>i; j--){
                cout<<"*";
            }
            for(int j=0; j<2*i; j++ ){
                cout<<" ";
            }
            for(int j=0; j<n-i; j++){
                cout<<"*";
            }
        }

        if(i>n){
            for(int j=0; j<= i-n; j++){
                cout<<"*";
            }
            for(int j=i; j<=2*(i-n); j--){
                cout<<"p";
            }
            // for(int j=0; j<n-i; j++){
            //     cout<<"*";
            // }
        }
       

        cout<<endl;
    }
    return 0;
}