class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int counter = 0;
        
        int left = 0;
        int mid = 1;
        int right = 2;

        while(left < nums.size()-2)
        {
            mid = left +1;
            right = mid +1;

            if(2*(nums[left]+nums[right]) == nums[mid])
            {
                ++counter;
            }

            ++left;
        }

        return counter;
    }
};
