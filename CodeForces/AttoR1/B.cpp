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


    int n , x;
    cin>>n>>x;

    string s;
    cin>>s;

    int pos = x - 1;

    int l = (pos > 0 ? (int)s.rfind('#', pos - 1): string::npos);
    if (l == string::npos) l = -1;

    int r = (pos + 1 < n ? (int)s.find('#', pos + 1): string::npos);
    if (r == string::npos) r = n;

    int a ;

    if(l == -1 && r == n) a = 1;
    else{
        
        int c1 = min(pos + 1 ,  n - r + 1);
        int c3 = min(l + 2 , n - pos);

        a = max(c1 , c3);
    }

    cout<<a<<endl;


    

  }
}