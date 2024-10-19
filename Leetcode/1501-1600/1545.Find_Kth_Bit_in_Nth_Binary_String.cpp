class Solution {
public:
    char findKthBit(int n, int k) {
        string s_prev = "0";
        string s_curr = "0";

        for(int i = 2; i <= n; ++i)
        {
            string inverse = s_prev;
            std::reverse(inverse.begin(), inverse.end());
             
            for(int j = 0; j<inverse.length(); j++)
            {
                if(inverse[j]=='0')
                {
                    inverse[j]='1';
                }
                else
                {
                    inverse[j]='0';
                }
            }

            s_curr = s_prev;
            s_curr += "1";
            s_curr += inverse;

            s_prev = s_curr;
        }

        return s_curr[k-1];
    }
};
