#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int counter1 = 2;

    int counter2 = 0;

    int temp = counter1;
    int temp2 = counter2;

    for(int i = 0 ; i< n ; i++){
        for(int j=0 ; j < n + i ; j++){

            if( j < n - i - 1){
                cout<<"  ";
            }
            else if( j <= n - 1){
                cout<<temp<<" ";
                temp++;
            }
            else if(i==0 && j >n-1){
                break;
            }
            else{
                cout<<temp2<<" ";
                temp2--;
            }

        }
        
        temp = counter1++;

        counter2  = counter2 + 2;
        temp2 = counter2;

        cout<<endl;
    }
    return 0;
}