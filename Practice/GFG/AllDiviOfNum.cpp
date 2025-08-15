#include <bits/stdc++.h>

using namespace std;

void print_divisors(int n)
{

    set<int> vec;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            vec.insert(i);
            vec.insert(n / i);
        }
    }

    for (int i : vec)
    {
        cout << i << ' ';
    }
}

int main()
{
    int n = 36;
    print_divisors(n);

    return 0;
}