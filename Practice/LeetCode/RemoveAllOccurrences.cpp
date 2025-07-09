// Problem Number: 1910

#include <bits/stdc++.h>

using namespace std;

string removeOccurrences(string s, string part)
{

    bool flag = true;
    while (flag)
    {
        int idx = s.find(part);
        if (idx < s.length())
        {
            s.erase(idx, part.length());
        }
        else
        {
            flag = false;
        }
    }

    return s;
}

int main()
{

    string s = "axxxxyyyyb";
    string part = "xy";
    cout << removeOccurrences(s, part);

    return 0;
}