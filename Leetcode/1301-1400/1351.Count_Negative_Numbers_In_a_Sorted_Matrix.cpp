class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int totalNums = grid.size()*grid[0].size();
        int row_cap = grid.size();
        int col_cap = grid[0].size();
        int counter = 0;

        for(int i = 0; i < row_cap ; i++)
        {
            if(grid[i][0] < 0) //if the first is negative, no point going further
            {
                row_cap=i;
                break;
            }

            for(int j = 0; j < col_cap; j++)
            {
                if(grid[i][j] >= 0)
                {
                    counter++;
                }
                else
                {
                    col_cap=j;
                }
            }
        }

        return totalNums-counter;
    }
};
