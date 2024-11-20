class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        std::map<int, int> hashmap;
        std::set<int> hashset;

        for(auto item : arr)
        {
            if(hashmap.find(item)!=hashmap.end())
            {
                hashmap[item]++;
            }
            else
            {
                hashmap.insert({item, 1});
            }
        }

        for(auto const& [key, val] : hashmap)
        {
            //if the given frequency is found in the hashset
            if(hashset.find(val) != hashset.end())
            {
                return false;
            }
            else
            {
                //if not found insert the freq into the hashset
                hashset.insert(val);
            }
        }

        return true;
        
    }
};
