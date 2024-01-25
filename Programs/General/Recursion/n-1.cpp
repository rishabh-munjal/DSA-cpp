//printing n to 1 using recursion in cpp
#include <iostream>
using namespace std;

void function(int n){

    if(n>0){
        cout<<n;

        function(n-1);
    }
    else{
        return ;
    }
    
}

int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;

    function(n);

    return 0;
}