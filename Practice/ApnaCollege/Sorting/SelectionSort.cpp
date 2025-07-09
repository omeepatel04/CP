#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            
            if (arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}



int main()
{
    int arr[5] = {4, 1, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}