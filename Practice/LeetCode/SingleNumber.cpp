// Problem Number: 136

#include <bits/stdc++.h>

using namespace std;

    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int val : nums){
            ans^=val;
        }
        return ans;
    }


int main(){

    vector<int> vec = {2, 4, 3, 4, 2};
    cout << singleNumber(vec);

    return 0;
}