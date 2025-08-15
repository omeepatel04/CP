// Problem Number: 74 [Two-Layer Binary Search on a 2D Vector]

#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int lowMain = 0, highMain = matrix.size()-1, midMain = 0;

    while (lowMain <= highMain)
    {
        midMain = lowMain + (highMain - lowMain) / 2;

        if (matrix[midMain][0] > target)
        {
            highMain = midMain-1;
        }
        else if (matrix[midMain].back() < target)
        {
            lowMain = midMain+1;
        }
        else
        {
            // Inner binary search
            int lowSub = 0, highSub = matrix[midMain].size()-1, midSub = 0;
            while (lowSub <= highSub)
            {
                midSub = lowSub + (highSub - lowSub) / 2;

                if (matrix[midMain][midSub] == target)
                {
                    return true;
                }
                else if (matrix[midMain][midSub] > target)
                {
                    highSub = midSub-1;
                }
                else
                {
                    lowSub = midSub+1;
                }
            }

            return false;
        }
    }

    return false;
}

int main()
{

    vector<vector<int>> vec = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 34;

    cout << searchMatrix(vec, target);

    return 0;
}