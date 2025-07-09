// Leetcode - Problem Number 136 - 03 July 2025

#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>nums){
     int ans = 0;

     for(int val: nums){
        ans^=val;
     }

     return ans;
}


int main(){

    vector<int> nums = {4,1,2,1,2};
    cout << singleNumber(nums);

    return 0;
}