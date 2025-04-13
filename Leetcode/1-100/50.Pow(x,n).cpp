class Solution {
public:
    double myPow(double x, int n) {
        long long _n = n;

        if(n < 0)
        {
            _n = abs(_n);
        }

        double result = 1;

        while(_n > 0)
        {
            if(_n % 2 == 1)
            {
                result = (result * x);
            }
                    
            x = (x * x);
            _n = _n/2;
        }

        if(n<0){return 1/result;}

        return result;
    }
};
