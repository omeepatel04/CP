// Problem Number: 75 [Dutch National Flag(DNF) Algorithm]

#include <bits/stdc++.h>

using namespace std;

void sortColor(vector<int> &nums)
{

    int mid = 0, low = 0, high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{

    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColor(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }

    return 0;
}