class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int maxSum = 0;
        int i = 0;

        for(auto item : nums)
        {
            if(i%2==0)
            {
                maxSum+=item;
            }

            ++i;
        }

        return maxSum;
    }
};
