class Solution {
public:
    int arrangeCoins(int n) {
     //1+2+3+4+ ... x = n
     // x(x-1)/2 = n   
     // x^2 - x = 2n
     // x^2 + x +0.25 = 2n + 0.25
     // (x+0.5)^2 = 2n + 0.25
     // (x+0.25) = sqrt(2n + 0.25)
     //  x = sqrt(2n + 0.25)-0.25

     return std::floor(sqrt((double)2*n+0.25)- 0.5);
    }
};
