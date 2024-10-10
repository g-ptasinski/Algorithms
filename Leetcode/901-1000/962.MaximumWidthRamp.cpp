class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int left = 0;
        int right = 0;

        int maxr     = 0;
        int maxlength = 0;
        int currlength= 0;

        std::vector<int> maxright = nums;

        for(int i = nums.size()-2 ; i > -1 ; i--)
        {
            maxr = std::max(maxr, nums[i+1]);
            maxright[i] = std::max(maxr, nums[i]);
        }

        for(right = 0; right<nums.size(); right++)
        {
            while(nums[left]>maxright[right])
            {
                left++;
            }
            maxlength = std::max(maxlength, right-left);
        }

        return maxlength;
    }
};
