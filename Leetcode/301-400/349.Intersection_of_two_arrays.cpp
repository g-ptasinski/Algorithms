class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        std::unordered_map<int,bool> hashmap;

        for(auto item : nums1)
        {
            hashmap.insert({item, false});
        }

        for(auto item : nums2)
        {
            if(hashmap.find(item)!=hashmap.end() && (hashmap.find(item)->second)==false)
            {
                answer.push_back(item);
                hashmap.find(item)->second = true;
            }
        }

        return answer;
    }
};
