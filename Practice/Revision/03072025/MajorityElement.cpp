// Leetcode - Problem Number 169 - 03 July 2025

#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums){
     
     int count = 0;
     int ans = INT_MAX;
     for(int i = 0; i < nums.size(); i++){
            if(count==0){
                ans = nums[i];
            }

            if(ans==nums[i]){
                count++;
            } else {
                count--;
            }

            return ans;
        }
}

int main(){

    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);

    return 0;
}