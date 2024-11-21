class Solution {
public:
    int findNumOfSubseq(int subseqLength, int mainSeqLength)
    {
        if(subseqLength>mainSeqLength)
        {
            return 0;
        }
        else
        {
            return (mainSeqLength-subseqLength+1)+findNumOfSubseq(subseqLength+1,        mainSeqLength);
        }
        
    }

    int numberOfArithmeticSlices(vector<int>& nums) {
        int left = 0;
        int right = 1;
        int currDiff = 0;
        int  counter = 0;
        
        if(nums.size()<3)
        {
            return {};
        }
        else
        {
            currDiff = nums[right]-nums[left];

            while(right < nums.size())
            {
                
                if(nums[right]-nums[right-1]!=currDiff)
                {
                    counter += findNumOfSubseq(3, right-left) ;

                    currDiff = nums[right]-nums[right-1];
                    left=right-1;
                }

                ++right;
            }

            counter+=findNumOfSubseq(3, right-left) ;
        }

        return counter;
    }
};
