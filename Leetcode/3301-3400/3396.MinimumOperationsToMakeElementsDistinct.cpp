class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        std::unordered_set<int> hashset;

        for(int i = nums.size()-1; i>=0; --i)
        {
            if(hashset.find(nums[i])!=hashset.end())
            {
                if((i+1)%3)
                {
                    return (i+1)/3+1;
                }
                else
                {
                    return (i+1)/3;
                }                
            }
            else
            {
                hashset.insert(nums[i]);
            }
        }

        return 0;
    }
};
