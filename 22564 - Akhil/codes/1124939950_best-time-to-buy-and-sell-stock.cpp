class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp(prices.size());
        int i;
        dp[0]=0;
        int m=prices[0];
        for( i=1; i<prices.size() ; i++){
            dp[i]=max(dp[i-1] , prices[i]-m);
            m=min(m,prices[i]);
        }
        return dp[i-1];
    }
};