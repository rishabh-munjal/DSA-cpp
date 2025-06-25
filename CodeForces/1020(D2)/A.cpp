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

    int n , k;

    cin>>n>>k;

    int o = k;
    int z = n - k;
    string res = "";

    while(o > 0 || z > 0){
      if(o >= z && o > 0){
        res += '1';
        o--;
      }else if (z > 0)
      {
        result += '0';
        z--;
      }
    }

    cout<<res<<endl;




    

  }

  return 0;
}