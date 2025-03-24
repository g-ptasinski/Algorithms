class Solution {
public:
    bool isValidSquare(int topLeftRowIndex, int topLeftColumnIndex, vector<vector<char>>& board)
    {
        std::set<int> hashset;

        for(int i = 0+topLeftRowIndex; i<3+topLeftRowIndex; ++i)
        {
            for(int j = 0+topLeftColumnIndex; j<3+topLeftColumnIndex; ++j)
            {
                if(hashset.find(board[i][j])!=hashset.end() && board[i][j] !=  '.')
                {
                    return false;
                }
                else
                {
                    hashset.insert(board[i][j]);
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        bool validSquares = 
        isValidSquare(0,0,board)&&isValidSquare(0,3,board)&&isValidSquare(0,6,board)&&
        isValidSquare(3,0,board)&&isValidSquare(3,3,board)&&isValidSquare(3,6,board)&&
        isValidSquare(6,0,board)&&isValidSquare(6,3,board)&&isValidSquare(6,6,board);

        if(!validSquares){return false;}
                
        for(auto item : board)
        {
            for(auto num : item)
            {
                std::set<int> hashset;
                if( hashset.find(num) != hashset.end() && num != '.' )
                {
                    return false;
                }
                else 
                {
                    hashset.insert(num);
                }
            }
        }

        

        for(int i = 0; i < 9; ++i)
        {
            std::set<int> hashset;
            
            for(auto item : board)
            {
                if(hashset.find(item[i])!=hashset.end())
                {
                    return false;
                }
                else
                {
                    hashset.insert(item[i]);
                }
            }
        }

        return true;
    }
};
