#include <bits/stdc++.h>

using namespace std;

void arrIntersection(int arr1[], int arr2[], int size)
{

    for (int i = 0; i < size; i++)
    {

        bool flag = false;

        for (int k = 0; k < i; k++)
        {
            if (arr1[i] == arr1[k])
            {
                flag = true;
            }
        }

        if (!flag)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    cout << arr1[i] << ' ';
                    break;
                }
            }
        }
    }
}

int main()
{

    int size = 6;
    int arr1[size] = {2, 2, 4, 5, 3, 10};
    int arr2[size] = {3, 8, 10, 9, 4};

    arrIntersection(arr1, arr2, size);

    return 0;
}