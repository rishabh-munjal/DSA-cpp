#include<iostream>
using namespace std;
int main() {
  int n;
  cin>>n;

  int k=1;
  int m=n;
  int l;
  int b = n;
  int a;
    for(int i=0 ; i<n ; i++){
        a = k;
        b = n;
            for(int j=0 ; j<=i ; j++){

                if(i==j){
                    cout<<j+1<<" ";
                }
                else if(j==0 && i!=0){
                    cout<<k<<" ";
                    
                }
                else{
                    a = a - (b-i);
                    cout<<a<<" ";
                    b++;
                }    
            }
        k = k+m;
        m--;
        cout<<endl;

    }

  return 0;

}  