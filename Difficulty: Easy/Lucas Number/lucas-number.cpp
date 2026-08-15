class Solution {
  public:
    long long lucas(int n) {
        // code here.
        if (n==0) return 2;
        if (n==1) return 1;
        
        long long Mod=1e9+7;
        vector<long long>dp(n+1);
        dp[0]=2;
        dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%Mod;
        }
        return dp[n];
    }
};
