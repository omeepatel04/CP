#include <bits/stdc++.h>

using namespace std;

int main()
{

    // IO Optimisation

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;

    // Input 1

    cin >> n;

    // Input 2

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input 3

    cin >> k;

    // Input 4

    vector<pair<int, int>> query(k);

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        query[i] = {a, b};
    }

    // Sort the array

    sort(arr.begin(), arr.end());


    // Main Algo 

      for (int i = 0; i < k; i++) {
        int low = query[i].first;
        int high = query[i].second;

        int left = lower_bound(arr.begin(), arr.end(), low) - arr.begin();
        int right = upper_bound(arr.begin(), arr.end(), high) - arr.begin();

        cout << right - left << ' ';
    }

    // Standard Newline

    cout << '\n';
}

/*

// Binary Search One

    for (int i = 0; i < k; i++)
    {
        int l1 = -1, r1 = n;
        bool flag1 = false;

        while (r1 > l1 + 1)
        {
            int m1 = (l1 + r1) / 2;

            if (arr[m1] == query[i].first)
            {
                indexOfLow = m1;
                flag1 = true;
            }
            else if (arr[m1] >= query[i].first)
            {
                r1 = m1;
            }
            else if (arr[m1] < query[i].first)
            {
                l1 = m1;
            }
        }

        if (r1 == n && flag1 == false)
        {
            indexOfLow = n + 1;
        }
        else
        {
            indexOfLow = r1 + 1;
        }

        //  Binary Search Two

        int l2 = -1, r2 = n;
        bool flag2 = false;

        while (r2 > l2 + 1)
        {
            int m2 = (l2 + r2) / 2;

            if (arr[m2] == query[i].second)
            {
                indexOfHigh = m2;
                flag2 = true;
            }
            else if (arr[m2] > query[i].second)
            {
                r2 = m2;
            }
            else if (arr[m2] <= query[i].second)
            {
                l2 = m2;
            }
        }

        if (l2 == -1 && flag2 == false)
        {
            indexOfHigh = 0;
        }
        else
        {
            indexOfHigh = l2 + 1;
        }

        int gap = indexOfHigh - indexOfLow + 1;

        cout << gap << ' ';
    }

*/

    