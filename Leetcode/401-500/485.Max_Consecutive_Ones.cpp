class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int counter = 0;
        int max     = 0;

        for(auto item : nums)
        {
            if(item)
            {
                counter++;
            }
            else
            {
                max = std::max(counter, max);
                counter = 0;
            }
        }
        max = std::max(counter, max);

        return max;
    }
};
