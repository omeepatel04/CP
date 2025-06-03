#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            char ch = j+64;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}