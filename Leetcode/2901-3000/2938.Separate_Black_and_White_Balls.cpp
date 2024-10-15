class Solution {
public:
    long long minimumSteps(string s) {
        long int counter = 0;
        long int answer = 0;

        for(int i = s.length(); i>=0; i--)
        {
            if(s[i] == '0')
            {
                counter++;
            }
            else
            {
                answer+=counter;
            }
        }

        return answer;
    }
};
