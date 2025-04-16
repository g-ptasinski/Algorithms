class Solution {
public:
    bool equalFrequency(string word) {
        std::vector<int>  FreqCount(26,0);
        
        for(auto item : word)
        {
            ++FreqCount[item-97];
        }
        
        std::sort(FreqCount.begin(), FreqCount.end());
        

        for(int i = 0; i<FreqCount.size(); ++i)
        {
            if(FreqCount.at(i) != 0)
            {
                bool possible = true;

                --FreqCount.at(i);
                int target= 0;

                for(int j = 0; j<FreqCount.size(); ++j)
                {
                    if(FreqCount[j] && !target)
                    {
                        target = FreqCount[j];
                    }
                    else if(FreqCount[j]!=target && FreqCount[j] && target )
                    {
                        ++FreqCount.at(i);
                        possible = false;
                        break;
                    }
                }
                if(possible){return true;}
            }
        }

        return false;
    }
};
