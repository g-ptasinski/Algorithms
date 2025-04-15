class Solution {
public:
    
    vector<vector<int>> subs;

    void nextSet(vector<int> CurrSubset, int i, vector<int>& nums)
    {
        if(i>=nums.size())
        {
            subs.push_back(CurrSubset);
            return;
        }

        nextSet(CurrSubset, i+1, nums);
        CurrSubset.push_back(nums[i]);
        nextSet(CurrSubset, i+1, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        nextSet({} , 0,  nums);

        return subs;
    }
};
