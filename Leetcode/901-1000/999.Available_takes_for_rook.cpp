class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ans = 0;
        int i0 = 0;  //i - ROWS
        int j0 = 0;  //j - COLS

        for (int i = 0; i < 8; i++) //FIND THE ROOK
        {
            for (int j = 0; j < 8; ++j)
            {
                if (board[i][j] == 'R')
                {
                    i0 = i;
                    j0 = j;
                }
            }
        }

        for(int i = i0+1; i < 8; i++)
        {
            if(board[i][j0]!= '.' )
            {
                if(board[i][j0]=='p')
                {
                    ++ans;
                }
                break;
            }
        }

        for(int i = i0-1; i >= 0; i--)
        {
            if(board[i][j0]!= '.' )
            {
                if(board[i][j0]=='p')
                {
                    ++ans;
                }
                break;
            }
        }

        for(int j = j0+1; j < 8; j++)
        {
            if(board[i0][j]!= '.' )
            {
                if(board[i0][j]=='p')
                {
                    ++ans;
                }
                break;
            }
        }

        for(int j = j0-1; j >= 0; j--)
        {
            if(board[i0][j]!= '.' )
            {
                if(board[i0][j]=='p')
                {
                    ++ans;
                }
                break;
            }

        }

        return ans;
    }
};
