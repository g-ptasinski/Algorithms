class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*std::map<int,int> hashmap;
        int majorityElement = nums[0];

        for(auto item : nums)
        {
            if(hashmap.find(item)!=hashmap.end())
            {
                ++hashmap[item];
                if(hashmap[item]>hashmap[majorityElement])
                {
                    majorityElement = item;
                }
            }
            else
            {
                hashmap.insert({item,1});
            }
        }*/

        //Boyer-Moore Majority Voting Algorithm

        int current = nums[0];
        int count = 1;

        for(int i = 1; i < nums.size(); ++i)
        {
            if(count==0)
            {
                current = nums[i];
            }

            if(nums[i] == current)
            {
                ++count;
            }
            else
            {
                --count;
            }
        }

        return current;
    }
};
