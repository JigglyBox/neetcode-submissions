class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyDate = 0;
        int sellDate = 1;
        int maxProfit = 0;

        while (sellDate < prices.size())
        {
            if (prices[buyDate] < prices[sellDate])
            {
                int currentProfit = prices[sellDate] - prices[buyDate];
                maxProfit = std::max(maxProfit, currentProfit); 
            }
            else
            {
                buyDate = sellDate;
            }
            ++sellDate;
        }
        return maxProfit;
    }
};
