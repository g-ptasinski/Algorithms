class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int curr = 0;
        int max = 0;
        int prev = nums[0]-1;

        for(auto const& item : nums)
        {
            if(item > prev)
            {
                curr++;
            }
            else
            {
                max = std::max(max, curr);
                curr = 1;
            }

            prev = item;
        }

        max = std::max(max, curr);

        return max;
    }
};
