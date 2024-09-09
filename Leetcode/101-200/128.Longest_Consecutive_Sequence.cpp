class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        std::unordered_set<int> hashset;

        int length = 0;
        int maxlength = 0;
        int element;

        for(auto item : nums)
        {
            hashset.insert(item);
        }

        for(auto item : nums)
        {
            length = 0;
            element = 0;

            if(hashset.find(item-1)==hashset.end()) //beginning of a sequence no left neighbour
            {
                element = item;

                while(hashset.find(element)!=hashset.end()) //next in sequence found
                {
                    length++;
                    element++;
                }

                maxlength = max(maxlength, length);
            }
        }

        return maxlength;
    }
};
