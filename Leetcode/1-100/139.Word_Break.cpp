class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        string aux = "";
        int size = s.length();

        std::vector<bool> dp(size+1, false);
        dp[size] = true;

        for(int i = size-1; i>=0; i--)
        {
            for(auto item : wordDict)
            {
                aux="";

                if(i + item.length() <= s.length())
                {
                    for(int j = i; j< i + item.length(); j++)
                    {
                        aux+=s[j];
                    }
                    if(aux == item)
                    {
                        dp[i]=dp[i+item.length()];
                    }
                    if(dp[i])
                    {
                        break;
                    }
                }
            }
        }
        return dp[0];
    }
};
