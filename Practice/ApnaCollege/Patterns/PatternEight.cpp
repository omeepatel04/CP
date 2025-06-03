#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 4;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }

        for (int j = 0; j < (n - i - 1) * 2; j++)
        {
            cout << ' ';
        }

        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = n - i; j > 0; j--)
        {
            cout << '*';
        }

        for (int j = 0; j < 2 * i; j++)
        {
            cout << ' ';
        }

        for (int j = n - i; j > 0; j--)
        {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}