class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> ans_vec(s.length(), 'a');
        string ans = "";
        int i = 0;

        for(auto const& item : indices)
        {
            ans_vec[item] = s[i];
            i++;
        }

        for(auto item : ans_vec)
        {
            ans+=item;
        }

        return ans;
    }
};
