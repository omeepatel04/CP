// Problem Number: 1991

#include <bits/stdc++.h>

using namespace std;

int findMiddleIndex(vector<int> &nums)
    {

        int sum = 0;
        for (int val : nums)
        {
            sum += val;
        }

        int rightCount = sum;
        int leftCount = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            rightCount -= nums[i];

            if (rightCount == leftCount)
            {
                return i;
            }

            leftCount += nums[i];
        }

        return -1;
    }

int main()
{

    vector<int> nums = {2,3,-1,8,4};
    cout << findMiddleIndex(nums);

    return 0;
}