    // Problem Number: 204 [Sieve Eratosthenes]

    #include <bits/stdc++.h>

    using namespace std;

    int countPrimes(int n)
    {
        vector<bool> isPrime(n + 1, true);
        int count = 0;

        for (int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * 2; j < n; j = j + i)
                {
                    isPrime[j] = false;
                }
                count++;
            }
        }

        return count;
    }

    int main()
    {
        int n = 20;
        cout << countPrimes(n);

        return 0;
    }