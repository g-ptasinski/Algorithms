class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int left = 0;
        int right = matrix[0].size()-1;

        while(left<right)
        {
            int top = left;
            int bottom = right;

            for(int i = 0 ; i < (right-left) ; i++)
            {
                int topLeft = matrix[top][left+i];

                // bottom left to top left
                matrix[top][left+i] = matrix[bottom -i][left];

                // bottom right to bottom left
                matrix[bottom-i][left] = matrix[bottom][right-i];

                // top right to bottom right
                matrix[bottom][right-i]=matrix[top+i][right];

                // top left to top right
                matrix[top+i][right] = topLeft;
            }

            left+=1;
            right-=1;
        }
    }
};
