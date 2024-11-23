class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        if(colors.size()<3)
        {
            return 0;
        }

        int left = 0;
        int mid = 1;
        int right = 2;
        int counter = 0;

        while(left < colors.size())
        {
            if(right > (colors.size()-1))
            {
                right = 0;
            }

            if(mid > (colors.size()-1))
            {
                mid = 0;
            }



            if(colors[right] == colors[left] && colors[right]!=colors[mid])
            {
                counter++;
            }

            ++left;
            ++right;
            ++mid;
        }

        return counter;
    }
};
