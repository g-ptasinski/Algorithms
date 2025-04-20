class Solution {
public:
    int numRabbits(vector<int>& answers) {
        
        std::unordered_map<int,int> hash; 
        int minRabbits = 0;

        for(auto item : answers)
        {
            if(hash.find(item)==hash.end())
            {
                hash.insert({item,1});
            }
            else
            {
                hash[item]++;
            }
        }

        for(auto item : hash)
        {
            if(item.first == 0)
            {
                minRabbits += item.second;
            }
            else if(item.second <= item.first+1)
            {
                minRabbits += item.first+1;
            }
            else
            {
                if((item.second)%(item.first+1))
                {
                    minRabbits += ((item.second)/(item.first+1)+1)*(item.first+1);
                }
                else
                {
                    minRabbits += ((item.second)/(item.first+1))*(item.first+1);
                }
            }
        }

        return minRabbits;
    }
};
