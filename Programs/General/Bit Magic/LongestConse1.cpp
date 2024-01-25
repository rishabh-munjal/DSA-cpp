#include <iostream>

using namespace std;

int Consecutive1(int n) {
    int count = 0;
    int max_count = 0;

    while (n != 0) {
        // Check if the least significant bit is 1
        if (n & 1) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;
        }
        // Right shift the number by 1
        n >>= 1;
    }

    return max_count;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Longest consecutive ones in the binary representation: " << Consecutive1(n);
    return 0;
}
