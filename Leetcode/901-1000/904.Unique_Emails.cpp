class Solution {
public:

    string parseLocal(string mail)
    {
        string answer = "";
        int i = 0;

        while(mail[i]!='@')
        {
            if(mail[i]=='+')
            {
                return answer;
            }
            else if(mail[i]!='.')
            {
                answer+=mail[i];
            }

            ++i;
        }

        return answer;
    }

    string parseDomain(string mail)
    {
        string answer = "";
        int i = 0;
        
        while(mail[i]!='@')
        {
            i++;
        }

        i++;

        while(i<mail.length())
        {
            answer+=mail[i];
            ++i;
        }

        return answer;
    }

    int numUniqueEmails(vector<string>& emails) {
        int counter = 0;
        std::map<string, std::unordered_set<string>> hashmap;

        for(auto item : emails)
        {
            string local = parseLocal(item);
            string domain = parseDomain(item);

            if(hashmap[domain].find(local)==hashmap[domain].end())
            {
                hashmap[domain].insert(local);
                ++counter;
            }
        }

        return counter;
    }
};
