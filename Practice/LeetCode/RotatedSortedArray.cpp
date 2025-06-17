// Problem Number: 33 [Modified Binary Search]

#include <bits/stdc++.h>
using namespace std;

int rotatedSortedArray(vector<int> nums, int tar)
{

    int st = 0, end = nums.size() - 1;

    while (st <= end)
    {

        int mid = st + (end - st) / 2;

        if (tar == nums[mid])
        {
            return mid;
        }

        if (nums[st] <= nums[mid])
        {
            if (nums[st] <= tar && tar <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= tar && tar <= nums[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{

    vector<int> vec = {4, 5, 6, 7, 0, 1, 2};
    int tar = 0;
    cout << rotatedSortedArray(vec, tar);

    return 0;
}