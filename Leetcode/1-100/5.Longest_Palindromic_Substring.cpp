class Solution {
public:
    string longestPalindrome(string s) {
        int left, right;
        string answer = "";
        int maxLength = 0;

        for(int i = 0; i<s.length(); ++i)
        {
            //odd
            left = i;
            right = i;

            while(left>=0 && right<s.length() && (s[left]==s[right]))
            {
                if(right-left+1 > maxLength)
                {
                    maxLength = right-left+1;
                    answer = s.substr(left, maxLength);
                }
                --left;
                ++right;
            }

            //even
            left = i;
            right = i+1;

            while(left>=0 && right<s.length() && (s[left]==s[right]))
            {
                if(right-left+1 > maxLength)
                {
                    maxLength = right-left+1;
                    answer = s.substr(left, maxLength);
                }
                --left;
                ++right;
            }
        }

        return answer;
    }
};
