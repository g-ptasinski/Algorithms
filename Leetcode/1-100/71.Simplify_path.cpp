class Solution {
public:
    string simplifyPath(string path) {
        std::stack<string> stack; 
        string answer = "";
        int i = 0;

        while(i<path.length())
        {
            if(path[i] == '/')
            {
                while(path[i] == '/')
                {
                    ++i;
                }

                if(!stack.empty())
                {
                    if(stack.top()!="/")
                    {
                        stack.push("/");
                    }
                }
                else
                {
                    stack.push("/");
                }
            }
            else 
            {
                string tmp = "";
                while(i<path.length() && path[i] != '/')
                {
                    tmp+=path[i];
                    ++i;
                }

                if(tmp == "..")
                {
                    if(!stack.empty())
                    stack.pop();
                    if(!stack.empty())
                    stack.pop();
                }
                else if(tmp == ".")
                {

                }
                else
                {
                    std::reverse(tmp.begin(), tmp.end());
                    stack.push(tmp);
                }

            }
           

        }

        while(!stack.empty())
        {
            answer+=stack.top();
            stack.pop();
        }

        if(answer != "")
        {
            std::reverse(answer.begin(), answer.end());

            if(answer[answer.length()-1] == '/')
            {
                answer.pop_back();
            }
        }
        
        if(answer == "")
        {
            answer+="/";
        }

        return answer;
    }
};
