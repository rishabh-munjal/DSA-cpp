// 1                           1
// 1   2                   2   1
// 1   2   3           3   2   1
// 1   2   3   4   4   3   2   1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
   

    for(int i = 1;i <= n;i++){
        int count=1;
        for(int j=0;j<i;j++){
            cout<<count;
            count++;
        } 
        for(int j=0;j<2*(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        } 
        cout<<endl;                                                                                                   

    }
    return 0;
}