class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++) {
            // Step 1: Track minimum price so far
            minPrice = min(minPrice, prices[i]);

            // Step 2: Calculate profit if sold today
            int profit = prices[i] - minPrice;

            // Step 3: Update max profit
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};