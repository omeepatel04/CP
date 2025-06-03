// Problem Number: 299A [GCD and Check]

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr)
    {
        cin >> x;
    }


    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(result, arr[i]);
    }


    bool found = false;
    for (int x : arr)
    {
        if (x == result)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << result << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}

/* Brute-Force

    for (int i = 0; i < n; i++)
    {

        bool flag = true;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] % arr[i] != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            return arr[i];
        }
    }

    return -1;

*/