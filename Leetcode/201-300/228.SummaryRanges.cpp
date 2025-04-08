class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> summaryRanges;

        if(nums.empty())
        {
            return summaryRanges;
        }

        std::sort(nums.begin() , nums.end());

        int begin = nums[0];
        int end = begin;
        int itemprv = nums[0];

        for(auto item : nums)
        {
            if(item > itemprv+1)
            {
                end = itemprv;
                std::string ans = "";
                
                if(begin != end)
                {
                    ans+=std::to_string(begin);
                    ans+="->";
                    ans+=std::to_string(end);
                }
                else
                {
                    ans+=std::to_string(begin);
                }

                summaryRanges.push_back(ans);
                
                begin = item;
            }
            else
            {
                end = item;
            }

            itemprv = item;
        }

        std::string ans = "";
                
        if(begin < end)
        {
            ans+=std::to_string(begin);
            ans+="->";
            ans+=std::to_string(end);
        }
        else
        {
            ans+=std::to_string(begin);
        }

        summaryRanges.push_back(ans);

        return summaryRanges;
    }
};
