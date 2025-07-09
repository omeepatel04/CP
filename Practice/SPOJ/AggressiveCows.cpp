// SPOJ [Binary Search]

#include <bits/stdc++.h>
using namespace std;

bool isValid(const vector<int> &positions, int num, int minDistance)
{
    int count = 1, lastStallPosition = positions[0];
    for (int i = 1; i < positions.size(); i++)
    {
        if (positions[i] - lastStallPosition >= minDistance)
        {
            count++;
            lastStallPosition = positions[i];
        }
    }
    return count >= num;
}

int MinMaxDistance(vector<int> positions, int num)
{
    sort(positions.begin(), positions.end());
    int st = 1, end = positions.back() - positions.front(), ans = 0;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(positions, num, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        cout << MinMaxDistance(vec, k) << endl;
    }

    return 0;
}
