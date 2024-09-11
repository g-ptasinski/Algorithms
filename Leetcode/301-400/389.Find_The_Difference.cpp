class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> s_freq(26 , 0);
        vector<int> t_freq(26 , 0);
        char ans = ' ';

        for(const char item : s)
        {
            s_freq[item-'a']++;
        }

        for(const char item : t)
        {
            t_freq[item-'a']++;
        }

        for(int i = 0; i<26; i++)
        {
            if(s_freq[i]!=t_freq[i])
            {
                ans = 'a'+i;
            }
        }

        return ans;
    }
};
