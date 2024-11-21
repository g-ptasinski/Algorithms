class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> answer;
        std::map<string,int> hashmap;
        
        if(s.length()<10)
        {
            return answer;
        }

        for(int j = 0; j<s.length()-9; j++)
        {
            string CurrString = ""; 
        
            for(int i = j; i<10+j; ++i)
            {
                CurrString += s[i];
            }

            if(hashmap.find(CurrString)==hashmap.end())
            {
                hashmap.insert({CurrString, 1});
            }
            else
            {
                hashmap[CurrString]++;
                if(hashmap[CurrString]==2)
                {
                    answer.push_back(CurrString);
                }
            }
        }
        

        return answer; 
    }
};
