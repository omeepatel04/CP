// Problem Number: 31 [Sorting Permutations]

#include <bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int> &nums)
{
    int pivot = -1;

    for (int i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            pivot = i - 1;
            break;
        }
    }

    int low = 0, high = nums.size() - 1;

    if (pivot == -1)
    {
        while(low<high){
        swap(nums[low], nums[high]);
        low++;
        high--;
        }

        return;
    }



    for (int i = nums.size() - 1; i > pivot; i--)
    {
        if (nums[i] > nums[pivot])
        {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    low = pivot + 1, high = nums.size() - 1;

    while (low < high)
    {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
}

int main()
{

    vector<int> nums = {1, 3, 2};
    nextPermutation(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }

    return 0;
}