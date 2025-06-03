// Problem Number: 53 [Kadane's Algorithm]

#include <bits/stdc++.h>

using namespace std;

void MaxSubArray(vector<int> nums)
{

    int crntVal = 0, maxVal = INT_MIN;

    for (int val : nums)
    {
        crntVal += val;
        maxVal = max(crntVal, maxVal);
        if (crntVal < 0)
        {
            crntVal = 0;
        }
    }

    cout << "Maximum Subarray: " << maxVal;
}

int main()
{

    vector<int> vec = {5, 4, -1, 7, 8}; // 23

    MaxSubArray(vec);

    return 0;
}