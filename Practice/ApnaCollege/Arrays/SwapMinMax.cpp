#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5] = {2, 5, 11, 9, 4}, smallest = INT_MAX, largest = INT_MIN, smallestIndex = -1, largestIndex = -1;

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

    swap(arr[smallestIndex], arr[largestIndex]);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}