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

    int n , x , k;

    cin>>n>>x>>k;

    string s;
    cin>>s;

    int first0 = -1;  
    int repeat0 = -1; 


    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            x++;
        } else {
            x--;
        }

        if (x == 0) {
            if (first0 == -1) {
                first0 = i + 1;
            }
        }
    }

    // cout<<"f0"<<first0<<endl;

    if(first0 > k){
        cout<<0<<endl;
        continue;
    } 

    x = 0;

    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'R'){
            x++;
        }else{
            x--;
        }
        if(x == 0){
            repeat0 = i + 1;
            break;
        }

    }

    if (first0 == -1) {
        cout << 0 << endl;
        continue;
    }

    if(repeat0 == -1){
        cout<<1<<endl;
        continue;
    }

    int result = 1 + ((k - first0) / repeat0);
    cout << result << endl;
    


    

  }
}