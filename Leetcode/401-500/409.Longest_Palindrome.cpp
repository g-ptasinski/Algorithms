class Solution {
public:
    int longestPalindrome(string s) {
        std::map<char,int> hashmap;
        int length = 0;

        for(int i = 0; i<s.length(); ++i)
        {
            if(hashmap.find(s[i])!=hashmap.end())
            {
                ++hashmap[s[i]];
            }
            else
            {
                hashmap.insert({s[i],1});
            }
        }

        bool thereIsAnOdd = false;

        for(auto it = hashmap.begin(); it!=hashmap.end(); ++it)
        {
            length+=it->second;
            
            if(it->second%2)
            {
                if(thereIsAnOdd){length-=1;}
                thereIsAnOdd = true;
            }
        }

        return length;
    }
};
