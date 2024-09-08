//NAIVE, beats 62% timewise, only 17% memorywise

class Solution {
public:
    int netPerimeter(vector<int> row1, vector<int> row2)
    {
        int perimeter = 0;
        int neighbours = 0;
        int i = 0;

        for(auto item : row1)
        {
            if(item)
            {
                perimeter+=4;

                if(i<row1.size()-1 && row1[i+1])
                {
                    neighbours+=2;
                }

                if(row2[i]){neighbours+=2;};
            }

            i++;
        }

        return perimeter-neighbours;

    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int i = 0;

        for(i = 0; i<grid.size()-1;i++)
        {
            perimeter += netPerimeter(grid[i] , grid[i+1]);
        }

        int j = 0;

        for(auto item : grid[i])
        {
            if(grid[i][j])
            {
                perimeter+=4;

                if((j<grid[i].size()-1))
                {
                    if(grid[i][j+1]){perimeter-=2;}
                }
            }

            j++;
        }

        return perimeter;
    }
};
