#include <bits/stdc++.h>

using namespace std;

int main(){

    int toFind = 3;
    vector<int> vec = {2, 4, 6, 3, 7, 9, 10};
    bool flag = false;

    for(int i = 0; i<vec.size(); i++){
        
        if(toFind==vec[i]){
            cout << "Value found at index: " << i;
            flag = true;
            break;
    }
            }
        if(flag==false){
            cout << "Value not found.";
        }

    return 0;
}