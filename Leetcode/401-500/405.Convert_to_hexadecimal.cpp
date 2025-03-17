class Solution {
public:
    string toHex(int num) {
        std::map<int, char> map = {{0,'0'},{1,'1'},{2,'2'},{3,'3'},{4,'4'},{5,'5'},{6,'6'},{7,'7'},{8,'8'},{9,'9'},{10,'a'},{11,'b'},{12,'c'},{13,'d'},{14,'e'},{15,'f'}};

        if(num == 0){return "0";}

        string num16repr = "";
        unsigned int unum;
        
        if(num < 0) unum = UINT_MAX + 1 + (unsigned int)num;
        else unum = num;

        while(unum > 0)
        {
            num16repr = map[unum%16] + num16repr;
            unum/=16;
        }

        return num16repr;
    }
};
