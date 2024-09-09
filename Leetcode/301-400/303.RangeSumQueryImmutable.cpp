class NumArray {
public:

    vector<int> sums;

    NumArray(vector<int>& nums) {
        sums.push_back(0);

        for(auto item : nums)
        {
            sums.push_back(sums.back()+item);
        }
    }

    int sumRange(int left, int right) {

        return sums[right+1]-sums[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
