class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int counter = 0;

        for(auto i = low; i<=high; ++i)
        {
            if(i<100 && i >10)
            {
                int temp = i%10;
                int num  = i/10;

                if(temp==num)
                {
                    ++counter;
                    continue;
                }

            }
            else if(i>999)
            {
                int temp = i%10;
                int num  = i/10;
                temp+=num%10;
                num/=10;
                
                int tmp = num%10;
                num/=10;
                num+=tmp;

                if(temp==num)
                {
                    ++counter;
                    continue;
                } 
            }
        }

        return counter;
    }
};
