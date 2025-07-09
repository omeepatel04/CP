// Coding Ninjas [Painters Partition]

#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<int> boards, int num, int maxSum)
{

    int total = 0, count = 1;

    for (int i = 0; i < boards.size(); i++)
    {

        if (boards[i] > maxSum)
        {
            return false;
        }

        if (total + boards[i] > maxSum)
        {
            count++;
            total = boards[i];
        }
        else
        {
            total += boards[i];
        }
    }

    if (count > num)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int PartitionPainter(vector<int> boards, int num)
{
    int sum = 0;

    for (int i : boards)
    {
        sum += i;
    }

    int st = 0, end = sum, mid = 0, ans = 0;

    while (st <= end)
    {

        mid = st + (end - st) / 2;

        if (isValid(boards, num, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{

    int k = 2;
    vector<int> vec = {48, 90};

    cout << PartitionPainter(vec, k);

    return 0;
}