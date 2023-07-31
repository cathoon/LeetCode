class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int dp[10001] = {0,};

        for(int i = 0; i < n; ++i)
        {
            int count = dp[i] == 0 ? 1 : dp[i] + 1;

            for(int j = 1; j <= nums[i]; ++j)
            {
                if (i+j >= n)
                    break;

                if(0 == dp[i+j])
                {
                    dp[i+j] = count;
                }
                else
                {
                    dp[i+j] = min(dp[i+j], count);
                }
            }            
        }

        return dp[n-1];
    }
};