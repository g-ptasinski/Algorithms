class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &item : image)
        {
            for(int i = 0; i < item.size()/2; i++)
            {
                std::swap(item[i], item[item.size()-i-1]);
            }
        }

        for(auto &item : image)
        {
            for(auto &number : item)
            {
                number = 1 - number;
            }
        }

        return image;
    }
};
