#include <bits/stdc++.h>

using namespace std;

void printUnique(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        bool flag = false;
        int element = arr[i];

        for (int j = 0; j < size; j++)
        {
            if (i != j && element == arr[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            cout << arr[i] << ' ';
        }
    }
}

int main()
{

    int size = 8;
    int arr[size] = {2, 3, 5, 4, 2, 7, 3, 4};

    printUnique(arr, size);

    return 0;
}