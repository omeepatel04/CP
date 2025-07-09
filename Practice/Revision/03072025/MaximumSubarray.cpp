// Leetcode - Problem Number 53 - 03 July 2025

#include <bits/stdc++.h>

using namespace std;

int maximumSubarray(vector<int> nums){
     
    int crntVal = 0, maxVal = INT_MIN;

    for(int i = 0; i < nums.size(); i++){

        crntVal+=nums[i];
        maxVal = max(crntVal, maxVal);

        if(crntVal<0){
            crntVal = 0;
        }

    }

    return maxVal;

}

int main(){

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maximumSubarray(nums);

    return 0;
}