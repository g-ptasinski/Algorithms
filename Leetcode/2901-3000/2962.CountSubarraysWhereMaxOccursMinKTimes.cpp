class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        if(nums.empty()){return 0;}
        
        int left = 0;
        int right = 0;

        int maxElem = 0;
        long long counter = 0;
        int n = nums.size();
        int elemCounter = 0;

        maxElem = *std::max_element(nums.begin(), nums.end());

        for(left = 0; left < n ; ++left)
        {
            while(right < n && elemCounter<k)
            {
                elemCounter += nums[right]==maxElem;
                ++right;
            }

            if(elemCounter == k)
            {
                counter += n - right +1;
            }

            elemCounter-= nums[left]==maxElem;
        }

        return counter;
    }
};
