class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> aux;

        for(auto item : code)
        {
            aux.push_back(0);
        }

        int j = 0;

        for(auto item : code)
        {
            if(k ==0)
            {
                item = 0;
            }
            else if(k<0)
            {
                for(int i = -1; i>=k; --i)
                {
                    int index = j+i;
                    if(index < 0)
                    {
                        index = code.size()+index;
                    }

                    aux[j]+=code[index];
                }
            }
            else
            {
                for(int i = 1; i<=k; ++i)
                {
                   int index = j+i;

                    if(index > code.size()-1)
                    {
                        index = index - code.size();
                    }

                    aux[j] += code[index];
                }
            }

            ++j;
        }

        return aux;
    }
};
