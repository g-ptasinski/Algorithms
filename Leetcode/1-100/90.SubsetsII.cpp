class Solution {
public:
    vector<vector<int>> subs;
    
    void nextSet(vector<int> CurrSubset, int index, vector<int>& nums)
    {
        subs.push_back(CurrSubset);

        for(int j = index; j<nums.size(); ++j)
        {
            if(j != index && nums[j] == nums[j-1] )
            {
                continue;
            }
            
            CurrSubset.push_back(nums[j]);
            nextSet(CurrSubset, j+1, nums);
            CurrSubset.pop_back();
        }
     }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        std::sort(nums.begin(), nums.end());
        
        nextSet({} , 0,  nums);

        return subs;
    }
};
