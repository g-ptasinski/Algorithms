class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> hashcolumns;
        vector<bool> hashrows;

        int i = 0;
        int j = 0;

        for(i = 0; i<matrix.size(); ++i)
        {
            hashrows.push_back(false);
        }
        
        for(i = 0; i<matrix[0].size(); ++i)
        {
            hashcolumns.push_back(false);
        }

        i=0; 
        j=0;

        for(auto row : matrix)
        {
            for(auto element : row)
            {
                if(element == 0)
                {
                    hashcolumns[i] = true;
                    hashrows[j] = true;
                }

                i++;
            }

            i=0;
            j++;
        }

        i=0; j=0;

       for(auto& row : matrix)
        {
            for(auto& element : row)
            {
                if(hashcolumns[i] || hashrows[j])
                {
                    element = 0;
                }

                i++;
            }

            i=0;
            j++;
        }
    }
};
