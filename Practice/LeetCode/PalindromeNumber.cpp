// Problem Number: 9

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    int initX = x;
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

    if (num == initX)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 121;
    cout << isPalindrome(n);

    return 0;
}