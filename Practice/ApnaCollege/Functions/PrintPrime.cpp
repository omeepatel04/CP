#include <bits/stdc++.h>

using namespace std;

void PrintPrime(int num)
{

    for (int i = 2; i <= num; i++)
    {

        bool flag = false;

        for (int j = 2; j <= sqrt(i); j++)
        {

            if (i % j == 0)
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
          {
            cout << i << ' ';
        }
    }
}

int main()
{

    int n;
    cout << "Enter a Number: ";
    cin >> n;

    PrintPrime(n);

    return 0;
}