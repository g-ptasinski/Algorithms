class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> minPrefix = cost;
        int currMin = cost[0];
    
        
        for(auto& item : minPrefix)
        {
                
            if(item < currMin)
            {
                currMin = item;
            }
            else
            {
                item = currMin;
            }
        }

        return minPrefix;
    }
};
