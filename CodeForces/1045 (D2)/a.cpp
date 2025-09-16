#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed power(int a , int b ){
    if(b == 0 )
        return 1 ;
    int half_power = power(a, b/2);
    if(b% 2 == 0 )
        return half_power * half_power ;
    else
      return half_power * half_power * a;
}

signed main() {
  ios::sync_with_stdio(false); cin.tie(NULL);
  
  int tc; cin >> tc;
  while (tc--) {

    int n, a , b;


    cin>>n>>a>>b;
    


    if(n % 2 != 0){
        if(b > a && b % 2 != 0){
            cout<<"YES"<<endl;
            continue;
        }else if(a % 2 != 0 && b % 2 != 0){
            cout<<"YES"<<endl;
            continue;
        }
    }else{
        if(b>a && b % 2 == 0){
            cout<<"YES"<<endl;
            continue;
        }else if(a % 2 == 0 && b % 2 == 0){
            cout<<"YES"<<endl;
            continue;
        }
    }

    cout<<"NO"<<endl;


    

  }
}