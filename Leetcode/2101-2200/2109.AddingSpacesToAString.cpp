class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i = 0;
        int j = 0;
        std::string ans = "";

        for(i = 0; i<s.length(); ++i)
        {
            if(j<spaces.size() && i == spaces[j])
            {
                ans+=" ";
                ++j;
            }
            ans+=s[i];
        }

        return ans;
    }
};
