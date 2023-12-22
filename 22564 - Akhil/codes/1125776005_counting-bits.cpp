class Solution {
public:
    vector<int> countBits(int n) {
        int i=2;
        vector<int> dp(n+1);
        dp[0]=0;
        if(n==0) return dp;
        dp[1]=1;
        
        while(i<=n)
        
        {
            if(i%2==0){
                dp[i]=dp[i/2];
                i+=1;
                }
            else{
                dp[i]=dp[i/2]+1;
                i+=1;
                }
        }
    return dp;
    }
};