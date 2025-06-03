#include <bits/stdc++.h>

using namespace std;

void Fibonacci(int a)
{
    int one = 0, two = 1, nextSum;

    cout << one << ' ' << two;

    for (int i = 0; i < a - 2; i++)
    {
        nextSum = one + two;
        one = two;
        two = nextSum;
        cout << ' ' << nextSum;
    }
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Enter a number greater than one.";
    }
    else
    {
        Fibonacci(n);
    }

    return 0;
}