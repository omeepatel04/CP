#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 10;

    for (int i = 0; i < n; i++)
    {

        for (int j = n - i - 1; j > 0; j--)
        {
            cout << ' ';
        }

        cout << '*';

        for (int j = i; j > 0; j--)
        {
            if (j == 1)
            {
                cout << ' ';
            }
            else
            {
                cout << "  ";
            }
        }

        if (i > 0)
        {
            cout << '*';
        }

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << ' ';
        }

        cout << '*';

        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - 2 - i) - 1; j++)
            {
                cout << ' ';
            }

            cout << '*';
        } 

        cout << endl;
    }

    return 0;
}