class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> answer;
        int i = 0;

        for(auto item : words)
        {
            if(std::find(item.begin(), item.end(), x)!=item.end())
            {
                answer.push_back(i);
            }

            ++i;
        }

        return answer;
    }
};
