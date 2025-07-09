// Leetcode - Problem Number 11 - 06 July 2025

#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int> &height)
{

    int maxArea = 0;
    int low = 0, high = height.size() - 1;

    while(low < high){
        int h = min(height[low], height[high]);
        int w = high-low;
        maxArea = max(maxArea, h*w);

        if(height[low] < height[high]){
            low++;
        } else {
            high--;
        }
    }

    return maxArea;
}

int main()
{

    vector<int> height = {1,2};

    cout << maxArea(height);

    return 0;
}
