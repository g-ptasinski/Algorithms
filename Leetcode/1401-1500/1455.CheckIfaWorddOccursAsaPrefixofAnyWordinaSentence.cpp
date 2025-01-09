class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        if(sentence.find(searchWord) != string::npos)
        {
            int pos = sentence.find(searchWord);
            int myCount = 1 + std::count(sentence.begin(), sentence.begin()+pos, ' ');
            return myCount;        
        }
        else
        {
            return -1;
        }
        return -1;        
    }
};
