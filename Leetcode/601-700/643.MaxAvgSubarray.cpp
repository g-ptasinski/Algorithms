class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = k-1;

        int maxSum = INT_MIN;
        int sum = 0;

        for(int i = 0; i < k; i++)
        {
            sum+=nums[i];
        }
        maxSum = std::max(sum, maxSum);

        while(right<nums.size()-1)
        {
            ++right;

            sum += nums[right];
            sum -= nums[left];

            ++left;

            maxSum = std::max(sum, maxSum);
        }

        return maxSum/(double)k;
    }
};
