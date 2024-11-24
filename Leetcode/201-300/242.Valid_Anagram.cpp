class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char,int> hashmap;

        if(s.length()!=t.length())
        {
            return false;
        }

        for(int i = 0; i<s.length(); ++i)
        {
            if(hashmap.find(s[i])!=hashmap.end())
            {
                ++hashmap[s[i]];
            }
            else
            {
                hashmap.insert({s[i], 1});
            }
        }

        for(int i = 0; i<t.length(); ++i)
        {
            if(hashmap.find(t[i])!=hashmap.end())
            {
                if(hashmap[t[i]]==0){return false;}
                --hashmap[t[i]];
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
