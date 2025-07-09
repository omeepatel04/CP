// Problem Number: 88 [Sorting]

#include <bits/stdc++.h>

using namespace std;

void mergeArrays(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int p1 = m - 1;
    int p2 = n - 1;
    int i = m + n - 1;

    while (p2 >= 0)
    {
        if (p1 >= 0 && nums1[p1] > nums2[p2])
        {
            nums1[i] = nums1[p1];
            p1--;
        }
        else
        {
            nums1[i] = nums2[p2];
            p2--;
        }
        i--;
    }
}

int main()
{

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3, n = 3;
    vector<int> nums2 = {2, 5, 6};

    mergeArrays(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++)
    {
        cout << nums1[i] << ' ';
    }

    return 0;
}