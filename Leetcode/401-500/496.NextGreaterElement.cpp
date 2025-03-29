class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_map<int,int> hashmap;
        std::vector<int> ans;

        for(int i = 0; i<nums2.size(); ++i)
        {
            int j = i;
            
            while(j < nums2.size())
            {
                if(nums2[j]>nums2[i])
                {
                    hashmap.insert({nums2[i], nums2[j]});
                    break;
                }

                ++j;
            }

            if(j>=nums2.size())
            {
                hashmap.insert({nums2[i], -1});
            }
        }

        for(auto item : nums1)
        {
            ans.push_back(hashmap[item]);
        }

        return ans;
    }
};
