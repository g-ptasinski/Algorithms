// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 0;
        int hi = n;
        int mid = lo+(hi-lo)/2;

        while(lo<=hi)
        {
            mid = lo+(hi-lo)/2;

            if(isBadVersion(mid) && !isBadVersion(mid-1))
            {
                return mid;
            }
            else if(isBadVersion(mid) && isBadVersion(mid-1) )
            {
                hi = mid -1;
            }
            else
            {
                lo = mid +1;
            }
        }

        return 1;
    }
};
