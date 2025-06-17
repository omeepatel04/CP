// Problem Number: 852 [Binary Search]

#include <bits/stdc++.h>

using namespace std;

int peakMountainArray(vector<int> nums)
{

    int st = 1, end = nums.size() - 2;

    while (st <= end)
    {

        int mid = st + (end - st) / 2;

        if (nums[mid] > nums[mid + 1])
        {
            if (nums[mid] > nums[mid - 1])
            {
                return mid;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            st = mid + 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> vec = {0, 10, 5, 2};

    cout << peakMountainArray(vec);

    return 0;
}