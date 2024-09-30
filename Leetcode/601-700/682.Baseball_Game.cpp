class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::vector<int> scores;
        int sum = 0;

        for(auto const& item : operations)
        {
            if(item == "+")
            {
                scores.push_back(scores[scores.size()-1]+scores[scores.size()-2]);
            }
            else if(item == "D")
            {
                scores.push_back(2*scores.back());
            }
            else if(item == "C")
            {
                scores.pop_back();
            }
            else
            {
                scores.push_back(stoi(item));
            }
        }

        for(auto const& item : scores)
        {
            sum+=item;
        }

        return sum;
    }
};
