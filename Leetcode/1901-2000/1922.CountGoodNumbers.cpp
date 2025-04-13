class Solution {
public:

    int kMod = 1000000007;

    long long myPowMod(long long x, long long n)
    {
        long long result = 1;

        while(n > 0)
        {
            if(n % 2 == 1)
            {
                result = (result * x) % kMod;
            }
                    
            x = (x * x) % kMod;
            n = n/2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {

        long long ans = (myPowMod(4,n/2)*myPowMod(5,(n+1)/2))%kMod;

        return static_cast<int>(ans);
    }
};
