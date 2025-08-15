#include <bits/stdc++.h>

using namespace std;

int countDigits(int n) {
    int count=0;
    // code here
    while(n!=0){
        n=n/10;
        count++;
    }
    
    return count;
}

int main(){

   int n = 567789; 
   cout << countDigits(n);


    return 0;
}