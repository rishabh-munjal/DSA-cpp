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

    vector<int> d(n);

    for(int i = 0 ; i < n ; i++){
        cin>>d[i];
    }

    //finding idx of first and last one;

    int first = -1;
    int last = -1;



    for(int i = 0 ; i < n ; i++){
        if(d[i] == 1){
            first = i;
            break;
        }
    }

    for(int i = n - 1 ; i >= 0 ; i--){
        if(d[i] == 1){
            last = i;
            break;
        }
    }

    if(first == -1 && last == -1){
        cout<<"YES"<<endl;
        continue;
    }

    int timeR = last - first + 1;

    if(timeR <= x) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }


    

  }
}