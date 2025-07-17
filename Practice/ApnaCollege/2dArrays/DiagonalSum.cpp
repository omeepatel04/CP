#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>& mat){
    int rows = mat.size();
    int cols = mat[0].size();
    int sum = 0;
    bool flag = false;
    int colsPov = 0;
    int colsNeg = mat[0].size()-1;

    for(int i = 0; i < rows; i++){

        if(colsPov==colsNeg && flag==false){
            sum+=mat[i][colsPov];
            flag = true;
            colsPov++;
            colsNeg--;
            continue;
        }

            if(colsNeg!=-1){
            sum+=mat[i][colsPov];
            colsPov++;
            sum+=mat[i][colsNeg];
            colsNeg--;
        }

        // cout << sum << ' ';
    }

    return sum;


}

int main()
{

    vector<vector<int>> mat = {{5}};
    cout << diagonalSum(mat); 

    return 0;
}