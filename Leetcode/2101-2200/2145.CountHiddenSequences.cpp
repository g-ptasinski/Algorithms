class Solution {
public:

    int numberOfArrays(vector<int>& differences, int lower, int upper) {

        long max = 0;
        long min = 0;
        long count = 0;

        for(auto item : differences)
        {
            count+=item;
            max = std::max(max,count);
            min = std::min(min, count);
        }        

        if(max-min > upper - lower)
        {
            return 0;
        }
        else
        {
            return ((upper - lower + 1)-(max - min));
        }
    }
};
