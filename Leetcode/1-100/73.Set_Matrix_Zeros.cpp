class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int i = 0;
        int j = 0;

        std::unordered_set<int> rows;
        std::unordered_set<int> cols;

        for(auto item : matrix)
        {
            for(auto num : item)
            {
                if(num == 0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }

                ++j;
            }

            j = 0;
            i++;
        }

        for(i = 0; i<matrix.size(); ++i)
        {
            for(j = 0; j<matrix[0].size(); ++j)
            {
                if(rows.find(i)!=rows.end() || cols.find(j)!=cols.end())
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
