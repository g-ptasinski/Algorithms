class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        std::map<string,int> hashmap;
        vector<string> answer;
        int i = 0;
        int currmin = 2002;

        for(auto item : list1)
        {   
            hashmap.insert({item,i});

            ++i;    
        }

        i = 0;

        for(auto item : list2)
        {
            if(hashmap.find(item)!=hashmap.end())
            {
                if(i+hashmap.at(item) == currmin)
                {
                    answer.push_back(item);
                }
                else if(i+hashmap.at(item) < currmin)
                {
                    currmin = i+hashmap.at(item);
                    answer.clear();
                    answer.push_back(item);
                }
            }

            ++i;
        }

        return answer;
    }
};
