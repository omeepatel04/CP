#include <bits/stdc++.h>

using namespace std;

int main()
{

    // IO Optimisation

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;

    cin >> n >> k;
    vector<int> arr(n), toFind(k);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin >> toFind[i];
    }

    for (int i = 0; i < k; i++)
    {

        int l = -1;
        int r = n;
        bool flag = false;

        while (r > l + 1)
        {

            int m = (l + r) / 2;

            if (arr[m] == toFind[i])
            {
                flag = true;
                cout << "YES" << '\n';
                break;
            }
            else if (toFind[i] > arr[m])
            {
                l = m;
            }
            else if (toFind[i] < arr[m])
            {
                r = m;
            }
        }

        if (flag == false)
        {
            cout << "NO" << '\n';
        }
    }

    // Structured New Line

    cout << '\n';
}
