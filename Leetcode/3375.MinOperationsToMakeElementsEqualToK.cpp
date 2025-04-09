class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        std::vector<int>::iterator result = std::min_element(nums.begin(), nums.end());
        std::unordered_set<int> hashset;

        if(*result < k)
        {
            return -1;
        }
        else
        {
            for(auto item : nums)
            {
                if(item != k)
                {
                    hashset.insert(item);
                }

            }

            return hashset.size();
        }
    }
};
