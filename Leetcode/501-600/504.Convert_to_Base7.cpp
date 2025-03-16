class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
        {
            return "0";
        }

        if(num < 0){return "-" + convertToBase7(-num);}

        string base7num = "";

        while(num>0)
        {
            base7num = (to_string)(num%7) + base7num;

            num /= 7;
        }

        return base7num;
    }
};
