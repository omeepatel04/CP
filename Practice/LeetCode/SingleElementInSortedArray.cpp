// Problem Number: 540 [Binary Search]

#include <bits/stdc++.h>

using namespace std;

int findSingle(vector<int> nums)
{

    int st = 0, end = nums.size() - 1;

    if(nums.size()==1){
        return nums[0];
    }

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if(mid==0 && nums[mid]!=nums[mid+1]) return nums[mid];
        if(mid==(nums.size()-1) && nums[mid]!=nums[mid-1]) return nums[mid];


        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid - 1])
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
            if (nums[mid] == nums[mid - 1])
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

    vector<int> vec = {3,3,7,7,10,11,11};
    cout << findSingle(vec);

    return 0;
}

/* Approach One


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0, end = nums.size()-1;

        if(nums.size()==1){
            return nums[0];
        }

        while(st<=end){
            if(nums[st]==nums[st+1]){
                st += 2;
            } else {
                return nums[st];
            }

            if(nums[end]==nums[end-1]){
                end -= 2;
            } else {
                return nums[end];
            }
        }
        return -1;
    }

*/