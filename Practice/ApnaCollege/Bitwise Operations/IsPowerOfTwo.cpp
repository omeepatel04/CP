#include <bits/stdc++.h>

using namespace std;

void IsPowerOfTwo(int a){

    if(a > 0 && (a & (a-1)) == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
}



int main()
{

    float n;
    cout << "Enter a number: ";
    cin >> n;

    IsPowerOfTwo(n);

    return 0;
}


/* Solution 1:

void IsPowerOfTwo(float a)
{
    while(a > 1){
        a/=2;
    }
    if(a==1){
        cout << "Yes";
        
    } else {
        cout << "No";
    }
}

*/