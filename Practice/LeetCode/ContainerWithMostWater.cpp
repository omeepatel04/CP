// Problem Number: 11 [Two-Pointer Approach]

#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height) {
    int maxArea = 0;
    int lb = 0, hb = height.size() - 1;

    while (lb < hb) {
        int h = min(height[lb], height[hb]);
        int w = hb - lb;
        maxArea = max(maxArea, h * w);

        // Move the pointer pointing to the shorter line
        if (height[lb] < height[hb])
            lb++;
        else
            hb--;
    }

    return maxArea;
}


int main()
{

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << maxArea(height);

    return 0;
}

/* Brute Force Approach

    int maxArea = 0;

    for (int i = 0; i < height.size(); i++)
    {

        for (int j = i + 1; j < height.size(); j++)
        {

            int minHeight = min(height[i], height[j]);
            int area = (j-i)*minHeight;
            maxArea = max(area, maxArea);
        }

    }

    return maxArea;


*/