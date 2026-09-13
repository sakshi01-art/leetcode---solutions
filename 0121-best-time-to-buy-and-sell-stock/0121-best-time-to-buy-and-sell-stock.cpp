class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int best = 0;
        for (int price : prices) {
            minPrice = min(minPrice, price);
            best = max(best, price - minPrice);
        }
        return best;
    }
};
