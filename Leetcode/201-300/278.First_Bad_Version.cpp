// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int middle;
        int high = n;
        int low = 1;

        while(low<high)
        {
            middle = low + (high-low)/2;

            if(isBadVersion(middle))
            {
                high = middle;
            }
            else if(!isBadVersion(middle))
            {
                low = middle + 1;
            }
        }

        return low;
    }
};
