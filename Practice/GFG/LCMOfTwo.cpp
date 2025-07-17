// GeeksForGeeks: LCM of two numbers

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
        int product = a*b;
        while(a>0 && b>0){
            if(a>b){
                a%=b;
            } else {
                b%=a;
            }
            
            if(a==0) return (product)/b;
            if(b==0) return (product)/a;
            if(a==b) return (product)/a;
        }
}

int main()
{
    int a = 20, b = 28;
    cout << gcd(a, b);

    return 0;
}