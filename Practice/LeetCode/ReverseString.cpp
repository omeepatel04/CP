// Problem Number: 344 

#include <bits/stdc++.h>

using namespace std;

void reverseString(vector<char> &str)
{
    int low = 0, high = str.size() - 1;

    while (low < high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

int main()
{

    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    reverseString(str);

    for (char i : str)
    {
        cout << i;
    }

    return 0;
}