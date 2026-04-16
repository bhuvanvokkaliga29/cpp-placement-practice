// This program finds the maximum profit from buying and selling stock once

#include <iostream>
using namespace std;

int main()
{

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {

        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    cout << "Maximum Profit: " << maxProfit;

    return 0;
}