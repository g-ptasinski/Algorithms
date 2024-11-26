class Solution {
public:
    int climbStairs(int n) {
        
        int first = 1;
        int second = 2;

        if(n == 0){return 1;}
        if(n == 1){return 1;}
        if(n == 2){return 2;}

        for(int i = 3; i <= n; ++i)
        {
            int tmp = first;
            first = second;
            second = tmp + first;
        }

        return second;
    }
};
