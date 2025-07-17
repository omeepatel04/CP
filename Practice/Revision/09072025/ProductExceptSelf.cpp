// Problem Number: 238 [T&S: O(n) and O(1)]

#include <bits/stdc++.h>

using namespace std;

void productExceptSelf(vector<int> nums)
{
    int crntProduct = 1;

    vector<int> prefix;
    vector<int> suffix;

    for (int i = 0; i < nums.size(); i++)
    {
        crntProduct *= nums[i];
        prefix.push_back(crntProduct);
        cout << crntProduct << ' ';

    }

            cout << endl;

    crntProduct = 1; // for suffix loop

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        crntProduct *= nums[i];
        suffix.push_back(crntProduct);
        cout << crntProduct << ' ';
    }


    // for (int i = 0; i < nums.size(); i++)
    // {
    //     nums[i] = 
    // }

}

int main()
{

    vector<int> nums = {1, 2, 3, 4};

    // for (int val : productExceptSelf(nums))
    // {
    //     cout << val << ' ';
    // }

     productExceptSelf(nums);

    return 0;
}

/*  Brute-Force Approach

    for(int i = 0; i < nums.size(); i++){

        int product = 1;

        for(int j = 0; j < nums.size(); j++){
            if(i==j){
                continue;
            } else {
                product*=nums[j];
            }
        }
        productArray.push_back(product);
    }


*/