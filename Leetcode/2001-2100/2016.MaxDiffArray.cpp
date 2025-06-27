class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        int min = nums[0];

        for(auto item : nums)
        {
            if(item <= min)
            {
                min = item;
            }
            else
            {
                ans = max(ans, item-min);
            }
        }

        return ans;
    }
};
