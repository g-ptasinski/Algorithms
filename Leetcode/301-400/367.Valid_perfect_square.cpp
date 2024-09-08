class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int low     = 0;
        long long int high    = num/2;
        long long int mid     = num/2;

        if(num == 1){return true;}

        while(low <= high)
        {
            mid = low + (high - low)/2;

            if(mid * mid == num){return true;}
            else if(mid * mid<num){low = mid+1;}
            else {high = mid -1;}

        }

        return false;
    }
};
