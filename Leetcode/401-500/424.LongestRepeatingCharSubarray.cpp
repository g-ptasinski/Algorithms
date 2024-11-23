class Solution {
public:

    char findMostFreq( std::map<char, int> sampleMap) 
    { 

        char mostFreq = ' ';
        std::pair<char,int> mostFreqPair = {' ', 0};

        // Iterate in the map to find the required entry 
        std::map<char, int>::iterator currentEntry; 
        for (currentEntry = sampleMap.begin(); 
            currentEntry != sampleMap.end(); 
            ++currentEntry) 
            { 

            if (currentEntry->second 
                > mostFreqPair.second) 
                { 
                    mostFreqPair = {currentEntry->first, currentEntry->second};
                    mostFreq = currentEntry->first;
                } 
            } 

        return mostFreq; 
    }

    int characterReplacement(string s, int k) {

        int left = 0;
        int right = 0;

        int currcounter = 0;
        int maxLength = 0;
        char mostFrequent = s[0];

        std::map<char,int> hashmap;

        while(right < s.length())
        {
            if(hashmap.find(s[right])!=hashmap.end())
            {
                ++hashmap[s[right]];
            }
            else
            {
                hashmap.insert({s[right],1});
            }

            mostFrequent = findMostFreq(hashmap);

            while((right-left+1) - hashmap[mostFrequent] > k)
            {
                --hashmap[s[left]];
                ++left;
               
                mostFrequent = findMostFreq(hashmap);
            }
            
            maxLength = std::max(maxLength, right-left+1);
            ++right;
        }

        maxLength = std::max(maxLength, right-left);

        return maxLength;
    }
};
