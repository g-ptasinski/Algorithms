class Solution {

private:
    std::vector<string> ans;

    void generateAns(int open, int close, int n, string current)
    {
        if(current.length() == 2*n)
        {
            ans.push_back(current);
        }
        else
        {
            if(open < n)
            {
                generateAns(open+1, close, n, current+"(");
            }
            if(close < open )
            {
                generateAns(open, close+1, n, current+")");
            }
        }
    }

public:
    vector<string> generateParenthesis(int n) {

        generateAns(0,0,n,"");

        return ans;
    }
};
