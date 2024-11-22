class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0; 

        int left = 0;
        int right = 0;

        if(prices.size()==1)
        {
            return 0;
        }

        while(right < prices.size() )
        {
            maxProfit = std::max(prices[right]-prices[left], maxProfit);

            if(prices[right] < prices[left])
            {
                left = right;
            }
            
            ++right;
        }

        return maxProfit; 
    }
};
