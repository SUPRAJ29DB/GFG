class Solution {
  public:

    unordered_map<long long, long long> dp;

    long long solve(long long n) {

        if(n <= 1)
            return n;

        if(dp.find(n) != dp.end())
            return dp[n];

        long long exchange = solve(n / 2)
                          + solve(n / 3)
                          + solve(n / 4);

        return dp[n] = max(n, exchange);
    }

    int maxExchangeMoney(int n) {
        return solve(n);
    }
};