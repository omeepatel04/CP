#include <bits/stdc++.h>

using namespace std;

int ReverseTheNumber(int a)
{
    int num, ReversedNumber = 0;

    while (a > 0)
    {
        ReversedNumber *= 10;
        num = a % 10;
        ReversedNumber +=num;
        a/=10;

    }
    return ReversedNumber;
}

int main()
{

    int n;
    cout << "Enter a Number: ";
    cin >> n;

    cout << ReverseTheNumber(n);

    return 0;
}