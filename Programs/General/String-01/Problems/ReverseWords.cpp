/*Given a String S, reverse the string without reversing its individual words.
Words are separated by dots.*/


//same approach as ReverseString.cpp


#include <bits/stdc++.h>
using namespace std;

void reverseWords(string &S)
{

    int start = 0;

    for (int end = 0; end < S.length(); end++)
    {
        if (S[end] == '.')
        {
            reverse(S.begin() + start, S.begin() + end);
            start = end + 1;
        }
    }

    reverse(S.begin() + start, S.end());
}

void reverseWholeString(string &S) {
    reverse(S.begin(), S.end());
}

int main()
{

    string S = "i.like.this.program.very.much";

    reverseWords(S);
    reverseWholeString(S);

    cout<<S;

    return 0;
}
