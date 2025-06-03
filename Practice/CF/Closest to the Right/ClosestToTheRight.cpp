#include <bits/stdc++.h>

using namespace std;

int main()
{

    // IO Optimisation

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n), toFind(k);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin >> toFind[i];
    }

    for (int i = 0; i < k; i++)
    {
        int l = -1, r = n;

        while(r>l+1){

            int m = (l+r)/2;

            if(arr[m]<toFind[i]){
                l = m;   

            } else if (arr[m]>=toFind[i]){
                r = m;
            }
        }
        
        if(r==n){
            cout << n+1 << '\n';
        } else {
            cout << r+1 << '\n';
        }
        
    
    }

    // Standard NewLine

    cout << '\n';
}