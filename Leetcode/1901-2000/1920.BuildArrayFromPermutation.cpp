class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        vector<int> ans = nums;
        int i = 0;

        for( auto item : nums)
        {
            ans[i]=nums[nums[i]];
            
            ++i;
        }

        return ans;
    }
};
