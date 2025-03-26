class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {

        vector<int> values;
        int remainder = grid[0][0]%x;

        for(auto item : grid)
        {
            for(auto num : item)
            {
                values.push_back(num);
                if(num%x != remainder)
                {
                    return -1;
                }
            }
        }

        std::sort(values.begin(), values.end());

        int median = values[values.size()/2];
        int operations = 0; 

        for(auto num : values)
        {
            if(num!=median)
            {
                operations += abs(median-num)/x;
            }
        }

        return operations;
    }
};
