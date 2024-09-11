class Solution {
public:
    int minBitFlips(int start, int goal) {

        int tmp = start^goal;
        int count = 0;

        while(tmp!=0)
        {
            count += tmp&1;
            tmp   >>=1;
        }

        return count;

    }
};
