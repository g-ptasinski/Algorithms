class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long max1 = LONG_MIN;
        long max2 = LONG_MIN;
        long max3 = LONG_MIN;

        for(auto item : nums)
        {
            if(item > max1)
            {
                max3=max2;
                max2=max1;
                max1=item;
            }
            else if(item > max2 && max1>item)
            {
                max3=max2;
                max2=item;
            }
            else if(item>max3 && max2>item)
            {
                max3 = item;
            }
        }

        if(max3>LONG_MIN){return max3;}
        else return max1;
    }
};
