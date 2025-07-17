#include <bits/stdc++.h>
using namespace std;

pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int key){

    pair<int, int> ans = {-1, -1};

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j]==key){
                ans.first = i+1;
                ans.second = j+1;
                return ans; 
            }
        }
    }

    return ans;
}

int main()
{

    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    pair<int, int> ans;

    ans = linearSearch(matrix, rows, cols, 8);
    cout << "Row: " << ans.first << endl << "Column: " << ans.second;   

    return 0;
}