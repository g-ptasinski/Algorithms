class Solution { 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Onepass
        std::map<int,int> hashmap;
        int i = 0;

        for(auto item : nums)
        {
            if(hashmap.find(target - item)!=hashmap.end())
            {
                return {hashmap[target - item], i};
            }

            hashmap.insert({item, i});

            i++;
        }

        return {0,0}; //default return
    }
};
