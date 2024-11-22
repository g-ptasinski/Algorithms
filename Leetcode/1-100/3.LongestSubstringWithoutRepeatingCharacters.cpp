class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxLength = 0;
        
        std::map<char,int> hashmap; 

        while(right < s.length())
        {
            if(hashmap.find(s[right])!=hashmap.end())
            {
                while(hashmap[s[right]]>0)
                {
                    --hashmap[s[left]];
                    ++left;
                }

                ++hashmap[s[right]];
            }
            else
            {
                hashmap.insert({s[right],1});
            }


            maxLength = std::max(maxLength, right-left+1);
            ++right;
        }

        return maxLength;
    }
};
