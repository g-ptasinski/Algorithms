class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        std::sort(g.begin(), g.end()) ; //glog(g)
        std::sort(s.begin(), s.end()) ; //slog(s)

        int answer  = 0;
        int i       = 0;

        for(auto item : g)
        {
            while(i < (s.size()))
            {
                if(item <= s[i])
                {
                    answer++;
                    break;
                }

                i++;
            }

            i++;
        }

        return answer;
    }
};
