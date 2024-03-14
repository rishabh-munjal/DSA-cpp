#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int val;

    for(int i = 0 ; i< n ; i++){
        
        val =  i;
        for(int j=0 ; j < n + i ; j++){

            if( j < n - i - 1){
                cout<<"  ";
            }
            else if( j <= n - 1){
                val++;
                cout<<val<<" ";
            }
            else{
                val--;
                cout<<val<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}