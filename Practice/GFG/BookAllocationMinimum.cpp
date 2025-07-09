// GeeksForGeeks [Binary Search]

#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<int> pages, int students, int maxAllowedPages)
{

    int n = pages.size(), studentNum = 1, pageSum = 0;

    for (int i = 0; i < n; i++)
    {

        if (pages[i] > maxAllowedPages)
        {
            return false;
        }

        if (pageSum + pages[i] > maxAllowedPages)
        {
            studentNum++;
            pageSum = pages[i];
        }
        else
        {
            pageSum += pages[i];
        }
    }

    if (studentNum > students)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int AllocateMinimum(vector<int> pages, int students)
{

    int sum = 0, ans = 0;

    if (pages.size() < students)
        return -1;

    for (int iterator : pages)
    {
        sum += iterator;
    }

    int st = 0, end = sum, mid = 0;

    while (st <= end)
    {
        mid = st + (end - st) / 2;

        if (isValid(pages, students, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> vec = {13, 31, 37, 45, 46, 54, 55, 63, 73, 84, 85};
    int k = 9;

    cout << AllocateMinimum(vec, k);

    return 0;
}