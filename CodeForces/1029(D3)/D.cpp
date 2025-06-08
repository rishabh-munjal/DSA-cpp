#include <bits/stdc++.h>
using namespace std;

bool helper1(const vector<long long>& a, long long b) {
    int c = a.size();
    for (int d = 2; d < c; ++d) 
    {
        long long e = a[0] + d * b;
        if (a[d] != e)
        {
            return false;
        } 
    }
    return true;
}

bool helper2(const vector<long long>& a) 
{
    int b = a.size();
    if (b < 2) return false;

    long long c = a[1] - a[0];
    if (!helper1(a, c)) return false;

    long long d = 2 * a[0] - a[1];
    if (d < 0) return false;

    if (d % (b + 1) != 0) return false;

    long long e = d / (b + 1);
    long long f = e + c;

    return f >= 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<long long> c(b);
        for (int d = 0; d < b; ++d)
         {
            cin >> c[d];
        }

        cout << (helper2(c) ? "YES" : "NO") << '\n';
    }

    return 0;
}
