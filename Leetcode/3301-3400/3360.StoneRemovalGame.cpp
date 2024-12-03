class Solution {
public:
    bool canAliceWin(int n) {
        for(int i = 10; i>0; --i)
        {
            if(n<i)
            {
                if(i%2)
                {
                    return true;
                }
                else
                {
                    return false;
                } 
            }

            n-=i;
        }

        return false;
    }
};
