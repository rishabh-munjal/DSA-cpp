#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {   

        int counter = i + 2;

        for (int j = 0; j < n + i; j++) {
            if (j < n - i - 1) {
                cout << " ";
            }
            else if (j <= n - 1) {
                cout << counter;
                counter++;
            }
            else {
                counter--;
                cout << counter;
            }
        }
;

        cout << endl;
    }
    return 0;
}
