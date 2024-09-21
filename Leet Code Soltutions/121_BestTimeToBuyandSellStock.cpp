// Best Solution in cpp -- Beats 100 % of Users.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int t_profit = 0;
        int profit = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            profit = prices[i] - min;
            if(t_profit < profit){
                t_profit = profit;
            }
        }
        return t_profit;
    }
};
