class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char curr = '{';

        for(auto const& item : letters)
        {
            if(item>target && item < curr)
            {
                curr = item;
            }
        }

        if(curr != '{'){return curr;}
        else { return letters[0];}
    }
};
