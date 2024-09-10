class Solution {
public:
    bool checkIfPrime(int number)
    {
        if(number <2){return false;}

        for(int i = 2; i<=sqrt(number); i++ )
        {
            if(number%i == 0){return false;}
        }

        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {

        int max = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(checkIfPrime(nums[i][i]))
            {
                max = std::max(max , nums[i][i]);
            }
            if(checkIfPrime(nums[i][nums.size()-1-i]))
            {
                max = std::max(max , nums[i][nums.size()-1-i]);
            }
        }

        return max;
    }
};
