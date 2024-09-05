class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0 ){return 0;}

        vector<int> dp(amount+1, amount+1);
        dp[0]=0;

        for(int i = 0; i<= amount; i++)
        {
            for(auto item : coins)
            {
                if(i - item >=0)
                {
                    dp[i] = std::min(dp[i-item]+1, dp[i]);
                }
            }
        }

        if(dp[amount]!=amount+1){return dp[amount];}
        else{return -1;}

    }
};
