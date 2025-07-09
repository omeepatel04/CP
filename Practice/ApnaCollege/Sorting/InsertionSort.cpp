#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
}

int main()
{

    int arr[5] = {4, 1, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}