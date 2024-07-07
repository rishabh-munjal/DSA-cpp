#include<bits/stdc++.h>
using namespace std;

int binarySubstring(string S, int N) {
    int count = 0;

    // Count the number of '1's in the string
    for (int i = 0; i < N; i++) {
        if (S[i] == '1') {
            count++;
        }
    }

    // Calculate the number of substrings that start and end with '1'
    return count * (count - 1) / 2;
}

int main() {
    string S = "01101";
    int N = S.length();

    cout << binarySubstring(S, N) << endl;

    return 0;
}

