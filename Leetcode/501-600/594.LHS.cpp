class Solution {
public:
    int findLHS(vector<int>& nums) {
        int LHS_length = 0;
        int left = 0;
        int right = 0;

        std::sort(nums.begin(), nums.end());

        while(right < nums.size())
        {
            while(abs(nums[left] - nums[right]) > 1)
            {
                left++;
            }

            if(abs(nums[left] - nums[right]) == 1)
            {
                LHS_length = std::max(LHS_length, right-left+1);
            }

            right++;
        }


        return LHS_length;
    }
};
