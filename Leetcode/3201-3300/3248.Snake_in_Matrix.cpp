class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0;
        int j = 0;

        for(auto const & item : commands)
        {
            if(item == "UP")
            {
                i--;
            }
            else if(item == "DOWN")
            {
                i++;
            }
            else if(item == "RIGHT")
            {
                j++;
            }
            else
            {
                j--;
            }
        }

        return ((i * n) + j);
    }
};
