class Solution {
public:
    int jump(vector<int>& nums) {
        
        int counter = 0;
        int max = 0;
        int end = 0;

        for(int i = 0; i<nums.size()-1;++i)
        {

            max = std::max(max, i+nums[i]);

            if(i == end)
            {
                ++counter;
                end = max;
            }
        }      
        return counter;
  }
};
