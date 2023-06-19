class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int maxProfit = 0;
        int minPrices = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            minPrices = min(minPrices, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrices);
        }
        return maxProfit;
    }
};