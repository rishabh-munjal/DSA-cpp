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

    int n;
    cin >> n;

    vector<int> res(n, -1);

    res[0] = 2;
    if (n > 1) res[n - 1] = 1;
    int counter = 3;


    for (int i = 1; i < n - 1; i += 2) {
        res[i] = counter;
        counter++;
    }

for (int i = (n - 2) % 2 == 0 ? n - 2 : n - 3; i >= 2; i -= 2) {
    res[i] = counter;
    counter++;
}
    // printing
    for (auto x : res) {
        cout << x << " ";
    }
    cout << endl;

    

  }
}