class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        std::sort(nums.begin(), nums.end());
        int sum = nums[0]+nums[1]+nums[nums.size()-1];
        int i = 0;
        int lo,hi;
        

        while(i < nums.size()-2)
        {
            lo = i+1;
            hi = nums.size()-1;

            while(lo<hi)
            {
                int workingSum = nums[i]+nums[lo]+nums[hi];

                if(workingSum < target)
                {
                    ++lo;
                }
                else if(workingSum > target)
                {
                    --hi;
                }
                else
                {
                    return workingSum;
                }

                if(abs(target-workingSum) < abs(target - sum))
                {
                    sum = workingSum;
                }
            }

            ++i;
        }

        return sum;
    }
};
