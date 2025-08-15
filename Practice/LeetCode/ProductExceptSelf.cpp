    // Problem Number: 238 [T&S: O(n) and O(1)]

#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int> nums)
{

    int n = nums.size();

    vector<int> productArray(n, 1);

    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++)
    {
        productArray[i] = productArray[i - 1] * nums[i - 1];
    }

    int countSuffix = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        countSuffix = nums[i + 1] * countSuffix;
        productArray[i] *= countSuffix;
        
        
    }

    return productArray;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};

    for (int val : productExceptSelf(nums))
    {
        cout << val << ' ';
    }

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