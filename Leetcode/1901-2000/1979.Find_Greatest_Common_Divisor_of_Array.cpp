class Solution {
public:

    int GCD(int a, int b)
    {
        while(b>0)
        {
            int tmp = a%b;
            a = b;
            b = tmp;
        }

        return a;
    }

    int findGCD(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        return GCD(nums[0], nums[nums.size()-1]);
    }
};
