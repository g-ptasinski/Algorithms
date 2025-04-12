class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        std::map<int, int> hashmap;

        for(auto item : nums)
        {
            if(hashmap.find(item)!=hashmap.end())
            {
                ++hashmap[item];
            }
            else
            {
                hashmap.insert({item, 1});
            }
        }

        int total = 0;

        for(auto& item : hashmap)
        {
            auto tmp = item.second;
            item.second = total;
            total+=tmp;
        }

        for(auto& item : nums)
        {
            item = hashmap[item];
        }

        return nums;
    }
};
