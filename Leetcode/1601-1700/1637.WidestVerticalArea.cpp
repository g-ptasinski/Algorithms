class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int max = 0;
        std::sort(points.begin(), points.end());

        for(int i = 1; i<points.size(); i++)
        {
            max = std::max(points[i][0]-points[i-1][0], max);
        }

        return max;
    }
};
