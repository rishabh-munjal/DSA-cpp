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
    int n, k;
    cin>>n>>k;

    vector<long long> a(n);

    int m = k + 1;

    for(int i = 0 ; i < n ; i++){
        cin>>a[i];

        long long no_of_time = a[i] % m;
        long long af = a[i] + no_of_time * k;

        if(i + 1 == n){
            cout<<af<<" "<<endl;
        }else{
            cout<<af<<" ";
        }

    }


    

  }
}