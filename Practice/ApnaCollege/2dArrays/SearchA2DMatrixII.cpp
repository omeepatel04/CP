// Problem Number: 240 [Binary Corner Search]

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){

    
    int m = matrix.size(), n = matrix[0].size();
    int row=0, col = n-1;

    while(col>=0 && row<m){
        if(target==matrix[row][col]){
            return true;
        } else if(target>matrix[row][col]){
            row++;
        } else {
            col--;
        }
    }

    return false;
}

int main()
{

    vector<vector<int>> vec = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 4;

    cout << searchMatrix(vec, target);

    return 0;
}