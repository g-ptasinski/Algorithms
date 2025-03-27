#define FREQ int 

class Solution {
public:

    string lastEnt(std::vector<std::pair<char, FREQ>> pairs)
    {
        std::string ans = "";

        for(auto item : pairs)
        {
            char tmp = item.second+48;

            ans +=item.first;;
            ans +=tmp;
        }


        return ans;
    }

    std::vector<std::pair<char, FREQ>> CountPairs(string prev)
    {
        std::vector<std::pair<char, FREQ>> ans;
        char previous = prev[0];
        int currCount = 1;

        for(int i = 1; i<prev.length(); ++i)
        {
            if(prev[i] == previous)
            {
                ++currCount;
            }
            else
            {
                ans.push_back({previous, currCount});
                previous = prev[i];
                currCount = 1;
            }
        }
        ans.push_back({previous, currCount});

        return ans;
    }

    string countAndSay(int n) {
        string lastEntry = "1";
        
        if(n==1)
        {
            return "1";
        }
        else
        {
            for(int i = 2; i<=n; ++i)
            {
                cout<<lastEntry<<endl;
                //call the one which transforms last entry into pair count
                std::vector<std::pair<char, FREQ>> freqCount = CountPairs(lastEntry);
                //then call the one which transform this pair count into string
                lastEntry = lastEnt(freqCount);
            }
        }

        std::reverse(lastEntry.begin(), lastEntry.end());

        return lastEntry;
    }
};
