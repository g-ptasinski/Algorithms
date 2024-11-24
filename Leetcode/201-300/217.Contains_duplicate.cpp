class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> hashset;

        for(auto item : nums)
        {
            if(hashset.find(item)!=hashset.end())
            {
                return true;
            }
            else
            {
                hashset.insert(item);
            }
        }

        return false;
    }
};
