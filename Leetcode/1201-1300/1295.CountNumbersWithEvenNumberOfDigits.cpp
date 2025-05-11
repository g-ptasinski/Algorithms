class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int counter = 0;

        for(auto item : nums)
        {
            if((item == std::clamp(item, 9, 99)) || (item == std::clamp(item, 999, 9999)) || item==100000)
            {
                ++counter;
            }
        }

        return counter;
    }
};
