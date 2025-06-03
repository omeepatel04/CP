#include <bits/stdc++.h>

using namespace std;

int main()
{

    // IO Optimisation

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Variable Initialisation

    long long moves = 0;

    // ArraySize Input

    long long arraySize;
    cin >> arraySize;

    // Array of n Integers

    long long arr[arraySize];
    cin >> arr[0];

    for (int i = 1; i < arraySize; i++)
    {
        cin >> arr[i];

        while (arr[i] < arr[i - 1])
        {
            arr[i] += 1;
            moves += 1;
        }
    }

    cout << moves;
    cout << '\n';
}