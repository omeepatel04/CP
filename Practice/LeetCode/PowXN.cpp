// Problem Number: 50

#include <bits/stdc++.h>

using namespace std;

double powXN(double x, int n){

    long binaryForm = n;
    double ans = 1;

    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2==1) return -1.0;

    if(binaryForm < 0){
        x = 1/x;
        binaryForm = -binaryForm;
    }

    while(binaryForm > 0){
        

        if(binaryForm%2==1){
            ans*=x;
        }

        x *= x;
        cout << "BinaryForm: " << binaryForm << ' ' << "Ans: " << ans << ' ' << "X: " << x << endl;
        binaryForm >>= 1; // Can also be done by binaryForm /= 2;
    }

    return ans;
}


int main(){

    double x = 2.00000;
    int n = 10;

    cout << powXN(x, n);

    return 0;
}