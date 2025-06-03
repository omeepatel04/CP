#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5] = {2, 5, 7, 6, 3};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex;
    int largestIndex;

    for (int i = 0; i < 5; i++)
    {

        if (smallest > arr[i])
        {
            smallest = arr[i];
            smallestIndex = i;
        }

        if (largest < arr[i])
        {
            largest = arr[i];
            largestIndex = i;
        }
    }

    cout << "Smallest Number: " << smallest << '\n';
    cout << "Largest Number: " << largest << '\n';
    cout << "Smallest Index: " << smallestIndex << '\n';
    cout << "Largest Index: " << largestIndex << '\n';

    return 0;
}