class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int friendArrival = times[targetFriend][0];

        int currArrival = 0;
        int currLeaving = 0;
        bool seated = false;
        
        std::vector<int> OccupiedChairs; //leaving

        std::sort(times.begin(), times.end(), [](vector<int> a, vector<int> b)
        {
            return(a[0]<b[0]);
        });

        int i = 0;

        while(currArrival <= friendArrival)
        {
            currArrival = times[i][0];
            currLeaving = times[i][1];

            seated = false;
            int j = 0;

            for(auto item : OccupiedChairs)
            {
                if(item <= currArrival)
                {
                    if(currArrival == friendArrival)
                    {
                        return j;
                    }
                    OccupiedChairs[j] = currLeaving;
                    
                    seated = true;
                    j++;
                    break;
                }

                j++;
            }

            if(!seated)
            {
                OccupiedChairs.push_back(currLeaving);
                
                if(currArrival == friendArrival)
                {
                    return OccupiedChairs.size()-1;
                }
            }

            i++;
        }

        return 0;
    }
};
