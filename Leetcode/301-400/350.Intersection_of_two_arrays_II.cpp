class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::map<int, int> hashmap; 

        vector<int> answer;
        vector<int> nums; //larger
        vector<int> freq; //smaller
 
        if(nums1.size()>=nums2.size())
        {
            nums = nums1; 
            freq = nums2;
        }
        else
        {
            nums = nums2;
            freq = nums1;
        }
        
        for(auto item : freq)
        {
            if(hashmap.find(item) != hashmap.end())
            {
                hashmap[item]+=1;
            }
            else
            {
                hashmap.insert({item, 1});
            }
        }
        
        for(auto item : nums)
        {
            if((hashmap.find(item) != hashmap.end()) && hashmap[item] > 0)
            {
                answer.push_back(item);
                --hashmap[item];
            }
        }

        return answer;
    }
};
