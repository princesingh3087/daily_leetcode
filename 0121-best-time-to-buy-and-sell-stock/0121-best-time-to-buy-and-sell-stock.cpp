class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minval = prices[0];
        
        for(int i=1;i<prices.size();i++){
            maxprofit = max(maxprofit , prices[i]-minval);
            minval = min(minval,prices[i]);
        }
        return maxprofit;
        
    }
};