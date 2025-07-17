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

    //return min of all


    int n;
    cin>>n;

    int res = INT_MAX;

    while(n > 0){
        res = min(res , n % 10);
        n /= 10;
    }

    //nya cide


    cout<<res<<endl;
    

  }

  return 0;
}