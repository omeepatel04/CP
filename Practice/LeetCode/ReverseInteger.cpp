// Problem Number: 7

#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{
    int num = 0, digit = 0;

    while (x != 0)
    {
        digit = x % 10;
        x /= 10;

        if (num > INT_MAX / 10 || num < INT_MIN / 10)
        {
            return 0;
        }

        num = (num * 10) + digit;
    }

    return num;
}

int main()
{
    int n = -123;
    cout << reverse(n);

    return 0;
}