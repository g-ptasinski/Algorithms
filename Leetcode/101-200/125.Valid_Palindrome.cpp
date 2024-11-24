class Solution {
public:
    bool isPalindrome(string s) {
        string parsed = "";

        for(int i = 0; i<s.length(); ++i)
        {
            if(isalnum(s[i]))
            {
                parsed+=std::tolower(s[i]);
            }
        }

        if(parsed.length()==0){return true;}

        for(int i = 0; i<parsed.length()/2+1; ++i)
        {
            if(parsed[i] != parsed[parsed.length()-i-1])
            {
                return false;
            }
        } 

        return true;
    }
};
