#include <bits/stdc++.h>
using namespace std;

#define int long long
#define loop(i, a, b) for (int i = a; i < b; i++)

void process() {
    int length;
    cin >> length;

    vector<int> arr(length);
    loop(i, 0, length) cin >> arr[i];

    map<int, int> position;
    int longest = 0, begin = 0, tempBegin = 0;

    loop(i, 0, length) {
        if (position.find(arr[i]) != position.end() && position[arr[i]] >= tempBegin) {
            tempBegin = position[arr[i]] + 1;
        }

        position[arr[i]] = i;

        if (i - tempBegin + 1 > longest) {
            longest = i - tempBegin + 1;
            begin = tempBegin;
        }
    }

    if (longest == 0) {
        cout << 0 << endl;
    } else {
        cout << begin + 1 << " " << begin + longest << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;
    while (cases--) {
        process();
    }

    return 0;
}
