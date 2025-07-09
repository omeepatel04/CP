// Problem Number: 151

#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s)
{

    string ans = "";

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";

        while (i < s.length() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0)
        {
            ans += ' ' + word;
        }
    }

    return ans.substr(1);
}

int main()
{

    string s = "the pen";
    cout << reverseWords(s);

    return 0;
}

