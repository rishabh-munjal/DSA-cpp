// ABCDE
// ABCD
// ABC 
// AB
// A
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char print = 65;

    for(int i=0; i<n; i++){
        print = 65;
        for(int j=n; j>i; j--){
            cout<<print;
            print++;
        }

        cout<<endl;
    }
    return 0;
}