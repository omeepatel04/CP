#include <bits/stdc++.h>
using namespace std;

int maxSum(int matrix[][3], int rows, int cols){

    int ans = INT_MIN;

    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum += matrix[i][j];
        }

        ans = max(ans, sum);
    }

    return ans;

}

int main()
{

    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;

    cout << maxSum(matrix, rows, cols);   

    return 0;
}