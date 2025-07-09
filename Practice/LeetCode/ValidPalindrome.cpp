// Problem Number: 125

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }

    int low = 0, high = s.length() - 1;

    while (low < high)
    {
        if (!isalnum(s[low]))
        {
            low++;
            continue;
        }

        if (!isalnum(s[high]))
        {
            high--;
            continue;
        }

        if (s[high] != s[low])
        {
            return false;
        }
        low++;
        high--;
    }

    return true;
}

int main()
{

    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);

    return 0;
}