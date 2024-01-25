//E
//DE
//CDE
//BCDE
//ABCDE

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char ch=69;

    for(int i=1; i<=n; i++){

        for(int j=0; j<i; j++){
            cout<<ch;
            ch++;
        }
        ch=69-i;
        cout<<endl;
    }
    return 0;
}