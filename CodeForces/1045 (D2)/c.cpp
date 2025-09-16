#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long


void readArray(int n, vector<int> &a) {
    for (int i = 1; i <= n; i++) cin >> a[i];
}
vector<int> makeDiffArray(const vector<int> &a, int n) {
    vector<int> d(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (i & 1) d[i] = d[i - 1] - a[i];
        else       d[i] = d[i - 1] + a[i];
    }
    return d;
}

int solve(int n, const vector<int> &a) {
    vector<int> d = makeDiffArray(a, n);
    vector<int> dec(n + 1, 0);

    int ans = 0, cur = 0, pre = 0, mx = 0;
    for (int i = 2; i <= n; i++) {
        int j = i - 2;
        if (j >= 0) {
            if (j & 1) pre += dec[j];
            int dj = d[j] + pre;
            mx = max(mx, dj);
        }

        int di = d[i] + cur;
        if (di < mx) {
            int diff = mx - di;
            int pos = (i & 1) ? i : (i - 1);
            dec[pos] += diff;
            cur += diff;
            ans += diff;
        }
    }
    return ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n + 1);
        readArray(n, a);
        cout << solve(n, a) << endl;
    }
}