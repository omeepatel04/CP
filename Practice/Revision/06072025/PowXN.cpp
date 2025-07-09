// Leetcode - Problem Number 50 - 06 July 2025

#include <bits/stdc++.h>

using namespace std;

double powXN(double x, int n)
{

    long binform = n;

    if (n < 0)
    {
        x = 1 / x;
        binform = -binform;
    }

    double ans = 1;

    while (binform > 0)
    {

        if (binform % 2 == 1)
        {
            ans *= x;
        }

        x *= x;

        binform /= 2;
    }

    return ans;
}

int main()
{

    double x = 2.1000;
    int n = 3;

    cout << powXN(x, n);

    return 0;
}