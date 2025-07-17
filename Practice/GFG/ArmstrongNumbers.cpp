// GeeksForGeeks: Armstrong Numbers

#include <bits/stdc++.h>

using namespace std;

bool armstrongNumber(int n)
{

    int digit = 0, sum = 0, initN = n;

    while (n != 0)
    {
        digit = n % 10;
        n /= 10;
        sum += (digit * digit * digit);
    }

    if (sum == initN)
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
    int a = 15;
    cout << armstrongNumber(a);

    return 0;
}