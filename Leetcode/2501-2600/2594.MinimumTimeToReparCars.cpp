class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long low = 0;
        long long high = (long long)*std::max_element(ranks.begin(), ranks.end())*cars*cars;
        long long mid = high/2;

        while(low<high)
        {
            long long mid = (high+low)>>1;
            long long count = 0;

            for(auto rank : ranks)
            {
                count+= (long long)sqrt(mid/rank);
            }

            if(count >= cars)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;


    }
};
