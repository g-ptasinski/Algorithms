class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string tmp = "";
        vector<string> answer;

        std::map<string,bool> hashmap;

        for(int i = 0 ; i < s1.length(); i++)
        {
            tmp = "";

            while(s1[i]!=' ' && i < s1.length())
            {
                tmp += s1[i];
                i++;
            }

            if(hashmap.find(tmp)!=hashmap.end())
            {
                hashmap[tmp] = false;
            }
            else
            {
                hashmap.insert({tmp, true});
            }

        }

        for(int i = 0 ; i < s2.length(); i++)
        {
            tmp = "";

            while(s2[i]!=' ' && i < s2.length())
            {
                tmp += s2[i];
                i++;
            }

            if(hashmap.find(tmp)!=hashmap.end())
            {
                hashmap[tmp] = false;
            }
            else
            {
                hashmap.insert({tmp, true});
            }

        }

        for(auto const& item : hashmap)
        {
            if(item.second)
            {
                answer.push_back(item.first);
            }
        }

        return answer;
    }
};
