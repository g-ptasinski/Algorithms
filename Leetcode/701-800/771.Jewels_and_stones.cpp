class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        std::unordered_set<char> jwls;
        int ans = 0;

        for(auto const& item : jewels)
        {
            jwls.insert(item);
        }

        for(int i = 0; i<stones.size(); i++)
        {
            if(jwls.find(stones[i])!=jwls.end())
            {
                ++ans;
            }
        }

        return ans;
    }
};
