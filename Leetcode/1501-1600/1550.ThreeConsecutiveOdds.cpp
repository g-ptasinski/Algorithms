class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int counter = 0;

        for(auto item : arr)
        {
            if(item%2 == 0)
            {
                counter = 0;
            }
            else
            {
                ++counter;
                if(counter == 3)
                {
                    return true;
                }
            }
        }

        return false;
    }
};
