 
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        for(auto item : words)
        {
            bool consistent = true;

            for(int i = 0; i<item.length(); i++)
            {
                if(allowed.find(item[i])==std::string::npos)
                {
                    consistent = false;
                    break;
                }
            }

            if(consistent){count++;}
        }

        return count;
    }
};
