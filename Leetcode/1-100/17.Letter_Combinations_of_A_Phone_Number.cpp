class Solution {
public:
    std::map<char, string> hashmap{{'2', "abc"},{'3', "def"},{'4', "ghi"},
    {'5', "jkl"},{'6', "mno"},{'7', "pqrs"},{'8', "tuv"},{'9', "wxyz"},};

    std::vector<string> addLetterCombinations(std::vector<string> answer, char nextChar)
    {
        std::vector<string> temp_vec;

        if(answer.empty())
        {
            auto length = hashmap[nextChar].length();
            for(int i = 0; i < length; i++)
            {
                string tmp = "";
                tmp += hashmap[nextChar][i];
                temp_vec.push_back(tmp);
            }
        }
        else
        {
            for(auto item : answer)
            {
                for(int j = 0; j<hashmap[nextChar].length(); j++)
                {
                    string tmp = item; 
                    tmp+=hashmap[nextChar][j];
                    temp_vec.push_back(tmp);
                }
            }
        }

        return temp_vec;
    }

    vector<string> letterCombinations(string digits) {

        std::vector<string> answer;

        for(int i = 0; i<digits.length(); i++)
        {
            answer = addLetterCombinations(answer, digits[i]);
        }

        return answer;
    }
};
