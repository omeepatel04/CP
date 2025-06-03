// Problem Number: 169 [Moore's Voting Algorithm]

#include <bits/stdc++.h>

using namespace std;

int MajorityElement(vector<int> nums)
{
            int count = 0, ans = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                if (count == 0)
                {
                    ans = nums[i];
                }

                if (ans == nums[i])
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }

            return ans;
        }


int main()
{

    vector<int> vec = {2, 2, 1, 1, 1, 2, 2};
    cout << MajorityElement(vec);

    return 0;
}

/*  Brute Force Approach

int maxCount = 0, lastMax;

    for (int i = 0; i < nums.size(); i++)
    {

        int count = 0;

        for (int j = 0; j < nums.size(); j++)
        {

            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        if (max(maxCount, count) == count)
        {
            lastMax = nums[i];
            maxCount = max(maxCount, count);
        }
    }
    return lastMax;

*/
