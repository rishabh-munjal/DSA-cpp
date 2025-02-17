#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed power(int a, int b)
{
    if (b == 0)
        return 1;
    int half_power = power(a, b / 2);
    if (b % 2 == 0)
        return half_power * half_power;
    else
        return half_power * half_power * a;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ones = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ones = i;
                break;
            }
        }
        if (ones == -1) {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        for (int i = ones; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                ans++;
            }
        }
        ans += 1;
        cout << ans << endl;
        }
}