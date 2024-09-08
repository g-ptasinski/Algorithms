class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int answer = 0;

        for(int i = 1; i<timeSeries.size(); i++)
        {
            if( timeSeries[i-1]+duration < timeSeries[i] )
            {
                answer+=duration;
            }
            else
            {
                answer+=timeSeries[i]-timeSeries[i-1];
            }
        }
        answer+=duration;

        return answer;
    }
};
