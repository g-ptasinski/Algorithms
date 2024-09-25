class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = 0;
        int max_i= 0;
        int max2 = 0;
        int i = 0;

        for(auto const& item : nums)
        {
            if(item > max1)
            {
                max2 = max1;
                max1 = item;
                max_i = i;
            }
            else if(item > max2)
            {
                max2 = item;
            }

            i++;
        }

        if(2*max2 > max1){return -1;}
        else {return max_i;}
    }
};
