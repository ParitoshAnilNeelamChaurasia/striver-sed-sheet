// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        int minPrice = INT_MAX; // To store the minimum price encountered so far
        int maxProfit = 0; // To store the maximum profit

        // Iterate through the prices
        for (int i = 0; i < n; ++i) 
        {
            // Update the minimum price if the current price is lower
            if (prices[i] < minPrice) 
            {
                minPrice = prices[i];
            }

            // Calculate the profit if we sell at the current price
            int profit = prices[i] - minPrice;

            // Update the maximum profit if the current profit is higher
            if (profit > maxProfit) 
            {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};
