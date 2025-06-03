// Problem Number: 121 

#include <bits/stdc++.h>

using namespace std;

int stockBuyNSell(vector<int> prices)
{

    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {

        int crntProfit = prices[i] - bestBuy;

        if (crntProfit > maxProfit)
        {
            maxProfit = crntProfit;
        }

        if (bestBuy > prices[i])
        {
            bestBuy = prices[i];
        }
    }

    if (maxProfit > 0)
    {
        return maxProfit;
    }
    else
    {
        return 0;
    }
}

int main()
{

    vector<int> vec = {7, 6, 4, 3, 1};

    cout << stockBuyNSell(vec);

    return 0;
}