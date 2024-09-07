class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> answer;
        vector<string> rows{"qwertyuiop","asdfghjkl","zxcvbnm"};

        for(auto item : words)
        {
            bool possible   = true;
            int  row_number = 0;
            string curr_row = "";

            for(auto item2 : rows)
            {
                row_number++;

                if(std::find(item2.begin(), item2.end(), std::tolower(item[0])) != item2.end())
                {
                    curr_row += item2;
                    break;
                }
            }

            for( int i = 0; i < item.length(); i++ )
            {
                if(std::find(curr_row.begin(), curr_row.end(), std::tolower(item[i])) == curr_row.end())
                {
                    possible = false;
                }
            }

            if(possible)
            {
                answer.push_back(item);
            }
        }

        return answer;
    }
};
