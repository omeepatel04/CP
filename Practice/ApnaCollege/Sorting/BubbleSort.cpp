#include <bits/stdc++.h>

using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(!swapped){
            return;
        }
    }
}



int main()
{
    int arr[5] = {4, 1, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}