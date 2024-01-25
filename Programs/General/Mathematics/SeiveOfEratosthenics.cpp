//printing the prime number <=n

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void seive(int n){
    vector <bool> v(n+1,true);

    for(int i=2 ; i<=sqrt(n); i++){
      if(v[i]){
          for(int j=2*i ; j<=n ; j = j + i ){
            v[j] = false;
        }
      }
    }

    for(int i=2 ; i<=n ; i++){
        if(v[i]){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the value of N";
    cin>>n;

    seive(n);


    return 0;
}