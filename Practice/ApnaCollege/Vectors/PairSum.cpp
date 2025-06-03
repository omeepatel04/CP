#include <bits/stdc++.h>

using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{

    int i = 0;
    int j = nums.size() - 1;
    vector<int> ans;

    while (i < j)
    {
        if (nums[i] + nums[j] == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else if (nums[i] + nums[j] > target)
            j--;
    }
}

int main()
{

    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    for (int val : pairSum(vec, target))
    {
        cout << val << ' ';
    }

    return 0;
}