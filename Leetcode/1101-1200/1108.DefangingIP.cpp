class Solution {
public:
    string defangIPaddr(string address) {

        for(int i = 0; i<address.length(); ++i)
        {
            if(address[i]=='.')
            {
                address.replace(address.begin()+i,address.begin()+i+1, "[.]");
                i+=2;
            }
        }

        return address;
    }
};
