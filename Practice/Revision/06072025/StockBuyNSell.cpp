// Leetcode - Problem Number 121 - 06 July 2025

#include <bits/stdc++.h>

using namespace std;

int stockBuyNSell(vector<int> prices)
{
    int minPrice = prices[0], profit = 0, maxProfit = INT_MIN;

    for (int i = 1; i < prices.size(); i++)
    {
        profit = prices[i]-minPrice;
        maxProfit = max(profit, maxProfit);
        minPrice = min(minPrice, prices[i]);
    }

    if(maxProfit>0){
        return maxProfit;
    } else {
        return 0;
    }
    
}

int main()
{

    vector<int> vec = {7,1,5,3,6,4};

    cout << stockBuyNSell(vec);

    return 0;
}