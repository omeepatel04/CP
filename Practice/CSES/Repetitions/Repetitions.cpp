#include <bits/stdc++.h>

using namespace std;

int main()
{

    // IO Optimisation

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Variable Initialisation

    string s1;
    long long finalSum = 0, sum = 1;

    // String Input

    cin >> s1;

    // Repetition Counting

    for (size_t i = 0; i != s1.length(); i++)
    {

        if (s1[i + 1] == s1[i])
        {
            sum += 1;
        }
        else
        {
            sum = 1;
        }

        if (finalSum < sum)
        {
            finalSum = sum;
        }
    }

    cout << finalSum;
    cout << '\n';
}