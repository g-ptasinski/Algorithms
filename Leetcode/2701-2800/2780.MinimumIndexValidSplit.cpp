class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        
        std::unordered_map<int,int> hashmap;
        
        for(auto item : nums)
        {
            if(hashmap.find(item)!=hashmap.end())
            {
                hashmap[item]++;
            }
            else
            {
                hashmap.insert({item,1});
            }
        }

        int domValue = nums[0]; //init

        for(auto val : hashmap)
        {
            if(val.second > hashmap[domValue])
            {
                domValue = val.first;
            }
        }

        int i = 0;
        int leftSubarrayCount = 0;

        for(auto item : nums)
        {
            if(item == domValue)
            {
                hashmap[domValue]--;
                leftSubarrayCount++;
            }

            if(leftSubarrayCount > (i+1)/2 && hashmap[domValue] > (nums.size()-i-1)/2)
            {
                return i;
            }

            ++i;
        }

        return -1;
    }
};
