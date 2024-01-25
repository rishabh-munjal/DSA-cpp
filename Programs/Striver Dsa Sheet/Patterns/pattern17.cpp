#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
     
    for(int i=1; i<n; i++){

         char ch = 65;

        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(int j=0; j<i-1; j++){
            ch--;
            cout<<ch;
        }
    
        cout<<endl;

    }
    return 0;
}