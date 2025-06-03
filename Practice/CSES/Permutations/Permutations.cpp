#include <bits/stdc++.h>

using namespace std;

int main()
{

    // IO Optimisation

    ios::sync_with_stdio(0);
    cin.tie(0);

    // User input

    long long n;
    cin >> n;


    // Logic Using Odd-Even

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {

            if (i % 2 == 0)
            {
                cout << i << ' ';
            }
        }

        for (int i = 1; i <= n; i++)
        {

            if (i % 2 == 1)
            {
                cout << i << ' ';
            }
        }
    }

    cout << '\n';
}