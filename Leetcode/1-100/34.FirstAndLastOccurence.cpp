class Solution {
public:
    int binarySearchBiased(vector<int>& nums, int target, bool LeftBias)
    {
        int high    = nums.size()-1;
        int low     = 0;
        int mid     = 0;
        int i = -1;

        while(low<=high)
        {
            mid = (low+(high-low)/2);

            if(nums[mid]>target)
            {
                high = mid -1;
            }
            else if(nums[mid]<target)
            {
                low = mid +1;
            }
            else
            {
                i = mid;
                if(LeftBias)
                high = mid -1;
                if(!LeftBias)
                low = mid +1;
            }
        }

        return i;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()){return {-1,-1};}

        int i_low   = binarySearchBiased(nums, target, true);
        int i_high  = binarySearchBiased(nums, target, false);

        return {i_low,i_high};
    }
};
