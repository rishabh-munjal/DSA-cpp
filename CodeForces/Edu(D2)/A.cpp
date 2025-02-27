#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long int ll;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPossible(int n, vector<int> b) {

    if(b.size() < 3) return true;
    
    for(int i = 0 ; i < b.size() - 2 ; i++){
        if(b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1){
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--) {
        int n;
        cin >> n;

        vector<int> b(n - 2);
        for(int i = 0; i < n - 2; i++) {
            cin >> b[i];
        }

        bool res = isPossible(n, b);

        if(res) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}