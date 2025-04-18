class Solution {
public:
    vector<vector<int>> combos;

    void comboFinder(const vector<int> candidates, vector<int> currCombo, int currSum, const int target, int index)
    {
        if(currSum >= target || index >= candidates.size())
        {
            if(currSum == target)
            {
                combos.push_back(currCombo);
            }
            return;
        }
        else
        {
            //skip the current number, go to next
            comboFinder(candidates, currCombo, currSum, target, index+1);
            //take the current number in
            currCombo.push_back(candidates[index]);
            comboFinder(candidates, currCombo, currSum+candidates[index], target, index);
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //std::sort(candidates.begin(), candidates.end());

        comboFinder( candidates, {} , 0, target , 0);

        return combos;
    }
};
