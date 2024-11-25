class Solution {
public:

void fillNeighbours(vector<vector<int>>& image, int color, int origColor, int sr, int sc )
{
    if(sc==image[0].size() || sc < 0){return;} 
    if(sr==image.size()    || sr < 0){return;} 

    if(sr>0 && image[sr-1][sc] == origColor)
    {
        image[sr-1][sc] = color;
        fillNeighbours( image, color, origColor, sr-1, sc );
    }
    if(sc>0 && image[sr][sc-1] == origColor)
    {
        image[sr][sc-1] = color;
        fillNeighbours( image, color, origColor, sr, sc-1 );
    }
    if(sr<image.size()-1 && image[sr+1][sc] == origColor)
    {
        image[sr+1][sc] = color;
        fillNeighbours( image, color, origColor, sr+1, sc );
    }
    if(sc<image[0].size()-1 && image[sr][sc+1] == origColor)
    {
        image[sr][sc+1] = color;
        fillNeighbours( image, color, origColor, sr, sc+1 );
    }
}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int origColor = image[sr][sc];
        image[sr][sc] = color;

        if(origColor == color){return image;}
        else
        {
            fillNeighbours( image, color, origColor, sr, sc );
        }
        

        return image;
    }
};
