class Solution {
public:
    int maximum69Number (int num) {

        std::vector<int> vec;

        while(num>0)
        {
            vec.push_back(num%10);
            num/=10;
        }

        for(int i = vec.size()-1; i>=0; i--)
        {
            if(vec.at(i) == 6)
            {
                vec.at(i) = 9;
                break;
            }
        }

        int i = 1;

        for(auto item : vec)
        {
            num+=i*item;
            i*=10;
        }

        return num;
    }
};
