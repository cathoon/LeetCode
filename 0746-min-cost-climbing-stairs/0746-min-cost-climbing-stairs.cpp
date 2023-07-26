class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[1001] = {0,};
        int size = cost.size();
        dp[1] = cost[0];
        
        for(int i=2; i<=size; ++i)
        {
            dp[i] = cost[i-1] + min(dp[i-1], dp[i-2]);
        }

        return min(dp[size], dp[size-1]);
    }
};