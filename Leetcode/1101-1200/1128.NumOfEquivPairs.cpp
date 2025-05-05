class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
       
       std::map<std::vector<int> , int> hash;
       int counter = 0;

       for(auto item : dominoes)
       {
            if(hash.find(item)==hash.end())
            {
                if(hash.find({item[1],item[0]})==hash.end())
                {
                    hash.insert({item,1});
                }
                else
                {
                    ++hash[{item[1],item[0]}];
                }
            }
            else
            {
                ++hash[item];
            }
       }

       for(auto item : hash)
       {
        counter+=(item.second*(item.second-1)*2/4);
       }

       return counter;
    }
};


//FASTER ONE

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count[100] = {0};
        int numOfPairs = 0;
      
        for (auto& domino : dominoes) {

            int normalizedValue = domino[0] < domino[1] 
                                  ? domino[0] * 10 + domino[1] 
                                  : domino[1] * 10 + domino[0];
          
            numOfPairs += count[normalizedValue]++;
        }
      
        return numOfPairs;
    }
};
