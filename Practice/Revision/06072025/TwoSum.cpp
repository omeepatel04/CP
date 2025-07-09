// Leetcode - Problem Number 1 - 06 July 2025

#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                if(nums[i]+nums[j]==target && i!=j){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }


int main(){

    vector<int> vec = {2,7,11,15};
    int target = 9;

    for(int val: twoSum(vec, target)){
        cout << val << ' ';
    }

    return 0;
}

