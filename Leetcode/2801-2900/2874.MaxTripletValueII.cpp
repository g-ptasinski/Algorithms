class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int maxElem = nums[0];

        vector<int> diffs = nums;
        vector<int> maxright = nums;
        
        for(auto& item : diffs) // calculate max element to the left, and then try to get the difference
        {
            maxElem = max(maxElem, item);

            int tmp = maxElem - item; 
            if(tmp < 0){tmp = 0;}
            
            item = tmp;
        }

        diffs[0] = 0;

        int maxRight = nums[nums.size()-1];

        for(int i = nums.size()-2; i>=0; --i) //calculate max element to the right
        {
            maxRight = max(maxRight, nums[i+1]);
            maxright[i] = maxRight;
        }
        maxright[maxright.size()-1]=0;

        long long maxVal = 0;

        for(int i = 1; i<maxright.size(); ++i)
        {
            maxVal = max(maxVal, (long long)maxright[i]*diffs[i]); //calculate multiplication of max right and max diff, so maximum product
        }

        return maxVal;
    }
};
