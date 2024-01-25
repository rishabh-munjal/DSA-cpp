//printing 1 to n using recursion

#include <iostream>
using namespace std;

void function(int n){

    if(n==0){
        return ;
    }
    function(n-1);
    cout<<n<<endl;
    
}

int main()
{
    int n;
    cout<<"Enter the number n";
    cin>>n;

    function(n);

    return 0;
}