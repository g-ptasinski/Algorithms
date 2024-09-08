class Solution {
public:
    double myPow(double x, int n) {

        if(n<0)
        {
            if(n == INT_MIN)
            {
                ++n;
                n *= -1;
                x = 1/x;
                return myPow(x*x, n/2);
            }

            return 1/myPow(x, -n);
        }

        if(n == 0 || x == 1)    {return 1;}
        if(x == 0)              {return 0;}

        double ans = myPow(x, n/2);

        if(n%2 == 0)
        {
            return ans*ans;
        }
        else
        {
            return ans*ans*x;
        }
    }
};
