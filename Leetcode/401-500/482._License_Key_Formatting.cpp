class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        std::string answer = "";
        int counter = 0;

        for(int i = s.length()-1; i>=0 ; i--)
        {
            if(isalnum(s[i]))
            {
                answer+=std::toupper(s[i]);
                counter++;
            }

            if(counter == k)
            {
                answer+='-';
                counter = 0;
            }
        }

        std::reverse(answer.begin(), answer.end());

        if(!answer.empty())
        {
            if(answer[0] == '-')
            { 
                answer.erase(0,1); 
            }
        }

        return answer;
    }
};
