#include <bits/stdc++.h>

using namespace std;

void reverseTheVector(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;

    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }

    for (int val : vec)
    {
        cout << val << ' ';
    }
    cout << endl;
}

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverseTheVector(vec);

    for (int val : vec)
    {
        cout << val << ' ';
    }

    return 0;
}