class Solution {
public:
    bool isValid(string s) {
        std::vector<char> stack;
        std::map<char,char> parentheses = {{'}','{'} , {']','['} , {')','('}};

        for(int i = 0; i<s.length(); ++i)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stack.push_back(s[i]);
            }
            else
            {
                if(!stack.empty() && stack.back() == parentheses[s[i]])
                {
                    stack.pop_back();
                }
                else
                {
                    return false;
                }
            }
        }

        if(stack.empty()){return true;}
        else{return false;}
    }
};
