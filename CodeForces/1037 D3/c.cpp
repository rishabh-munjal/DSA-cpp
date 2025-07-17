#include <bits/stdc++.h>
using namespace std;

#define int long long

void run() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        q.push({a[i], i});
    }

    int val = a[k - 1];
    vector<pair<int, int>> v;
    while (!q.empty()) {
        v.push_back(q.top());
        q.pop();
    }

    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (v[i].first == val && v[i].second == k - 1) {
            idx = i;
            break;
        }
    }

    int lvl = 0;
    for (int i = idx; i + 1 < n; i++) {
        int d = abs(v[i + 1].first - v[i].first);
        lvl += d;
        if (lvl > v[i].first) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) run();
}
