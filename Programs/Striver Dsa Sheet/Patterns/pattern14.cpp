// A
// AB 
// ABC 
// ABCD
// ABCDE
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char print = 65;

    for(int i=0; i<n; i++){
        print = 65;
        for(int j=0; j<=i; j++){
            cout<<print;
            print++;
        }

        cout<<endl;
    }
    return 0;
}