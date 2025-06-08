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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]].push_back(i);
        }

        int limit = INT_MAX;
        for (auto &it : mp)
        {
            if (it.second.size() == 1)
            {
                limit = min(limit, it.second[0]);
            }
        }

        // Collect valid ranges for line sweep
        vector<pair<int, int>> ranges;
        for (auto &it : mp)
        {
            if (it.second.size() > 1)
            {
                for (int i = 0; i < it.second.size() - 1; i++)
                {
                    int x = it.second[i];
                    int y = it.second[i + 1];
                    if (x <= limit && y <= limit)
                    {
                        ranges.push_back({x, y});
                    }
                }
            }
        }

        for (auto x : ranges)
        {
            cout << x.first << " " << x.second << endl;
        }

        vector<int> sweep(n + 2, 0);
        for (auto &r : ranges)
        {
            sweep[r.first + 1]++;
            sweep[r.second + 1]--;
        }

        int active = 0, ans = 0;
        for (int i = 0; i < limit; ++i) 
        {
            active += sweep[i];
            if (active == 0)
                ans++;
        }

        cout << ans << endl;
    }
}
