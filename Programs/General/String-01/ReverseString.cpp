// welcome to gfg --> gfg to welcome

/*Approach --> 

1.) abc bcd ed
2.) cba dcb de --> reverse individual char
3.) ed bcd abc --> reverse the whole string

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to reverse the individual characters of each word
void reverseIndividualWords(string &str) {
    int start = 0;
    for (int end = 0; end < str.length(); end++) {
        if (str[end] == ' ') {
            reverse(str.begin() + start, str.begin() + end);
            start = end + 1;
        }
    }
    // Reverse the last word
    reverse(str.begin() + start, str.end());
}

// Function to reverse the whole string
void reverseWholeString(string &str) {
    reverse(str.begin(), str.end());
}

int main() {
    string str = "welcome to gfg";

    // Step 1: Reverse individual characters of each word
    reverseIndividualWords(str);

    // Step 2: Reverse the whole string
    reverseWholeString(str);

    cout << str << endl;

    return 0;
}
