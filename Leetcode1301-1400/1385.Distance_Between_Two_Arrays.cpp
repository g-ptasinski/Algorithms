class Solution {
public:
    bool isThereElement(int element1, vector<int>& arr2, int d)
    {
        for(int target = element1 - d; target <= element1+d; target++ )
        {
            int high = arr2.size() -1;
            int low = 0;
            int mid = low + (high - low)/2;

            while(low <= high)
            {
                mid = low + (high - low)/2;

                if( arr2[mid]==target)
                {
                    return true;
                }
                else if(arr2[mid] < target)
                {
                    low = mid +1;
                }
                else
                {
                    high = mid -1;
                }

            }
        }

        return false;  
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        std::sort(arr2.begin(), arr2.end());
        int answer = arr1.size(); 

        for(auto item : arr1)
        {
            if(isThereElement(item, arr2, d))
            {
                answer--;
            }
        }

        return answer;
    }
};
