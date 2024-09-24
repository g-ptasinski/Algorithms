class Solution {
public:
    bool isValid(string word) {

        bool cons = false;
        bool vow = false;

        if(word.length() < 3 ){return false;}

        std::set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        for(int i = 0; i<word.length(); i++)
        {
            if(!std::isalnum(word[i])){return false;}

            if(vowels.find(tolower(word[i]))!=vowels.end())
            {
                vow = true;
            }
            else
            {
                if(word[i]>64)
                {
                    cons = true;
                }

            }
        }


        if(vow && cons)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
