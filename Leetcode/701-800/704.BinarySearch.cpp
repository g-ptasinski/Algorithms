class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid = 0;
        int high = nums.size()-1;
        int low = 0;

        while(low<=high)
        {
            mid = low + (high - low)/2;

            if(nums[mid]==target){return mid;}
            else if(nums[mid]<target){low = mid +1;}
            else{high = mid -1;}
        }

        return -1;
    }
};
