class Solution {
public:
    string reverseVowels(string s) {
        int lo = 0;
        int hi = s.length()-1;

        std::unordered_set<char> hashset = {'a', 'e', 'i', 'o','u'};

        while(lo<hi)
        {
            if(hashset.find(tolower(s[lo]))!=hashset.end())
            {
                while(hashset.find(tolower(s[hi]))==hashset.end())
                {
                    --hi;
                    if(hi<=lo){return s;}
                }

                std::swap(s[lo], s[hi]);
                --hi;
            }

            ++lo;
        }

        return s;
    }
};
