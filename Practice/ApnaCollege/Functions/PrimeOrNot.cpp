#include <bits/stdc++.h>

using namespace std;

void IsPrime(int num)
{

    bool flag = 0;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;

    IsPrime(n);

    return 0;
}