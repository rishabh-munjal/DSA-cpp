#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<int> S;

        for (int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            if (x != -1) {
                S.insert(x);
            }
        }

        if (S.empty()) {
            cout << "YES\n";
        } else if (S.size() == 1) {
            int val = *S.begin();
            if (val > 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
