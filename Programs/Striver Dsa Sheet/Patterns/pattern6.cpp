#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp = n;

    for(int i=0; i<n ; i++){
        for(int j=1 ; j<=temp ; j++){
            cout<<j;
        }
        temp--;
        cout<<endl;
    }
    return 0;
}