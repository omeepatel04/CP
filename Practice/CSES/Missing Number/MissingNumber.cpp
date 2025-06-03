#include <bits/stdc++.h>

using namespace std;

int main()
{

    // IO Optimization

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, userInput, inputSum = 0;

    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> userInput;
        inputSum += userInput;
    }

    long long total = (n * (n + 1)) / 2;

    cout << total - inputSum;
}

/* First Try: Self





#include <bits/stdc++.h>

using namespace std;

int main()
{

    // IO Initialisation

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Variable Initialisation

    int n, count = 0;

    cin >> n;

    int countMain = n;
    int arrTest[n];
    int arr[n - 1];
    int size = sizeof(arr) / sizeof(arr[0]);

    // Input Numbers N-1 into array

    while (countMain != 1)
    {
        cin >> arr[count];
        count++;
        countMain--;
    }

    // Testing Array

    for (int i = 0; i < n; i++)
    {
        arrTest[i] = i + 1;
    }

    // Missing Logic

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j != size; j++)
        {
            if (arrTest[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << arrTest[i];
            break;
        }
    }
}





*/