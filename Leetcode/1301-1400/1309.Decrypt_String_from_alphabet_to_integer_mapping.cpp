class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        string key = "";

        std::map<string,char> hashmap = {
                                          { "1",'a'},{ "2",'b'},{"3",'c'},{"4",'d'},{"5",'e'},
                                          {"6",'f'},{"7",'g'},{"8",'h'},{"9", 'i'},{"10#",'j'},
                                          {"11#",'k'},{"12#",'l'},{"13#",'m'},{"14#",'n'},{"15#",'o'},
                                          {"16#",'p'},{"17#",'q'},{"18#",'r'},{"19#",'s'},{"20#",'t'},
                                          {"21#",'u'},{"22#",'v'},{"23#",'w'},{"24#",'x'},{"25#",'y'},
                                          {"26#",'z'}};

        for(int i = s.size()-1; i >- 1; i-- )
        {
            key="";

            if(s[i] != '#')
            {
                key+=s[i];
            }
            else
            {
                key+=s[i-2];
                key+=s[i-1];
                key+=s[i];

                i-=2;
            }

            ans+=hashmap[key];
        }

        std::reverse(ans.begin(), ans.end());

        return ans;
    }
};
