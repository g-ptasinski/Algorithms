#include <iostream>
#include <unordered_map>

//Map solution O(n*log(n))
//time complexity of map.find is log(n)
void findMaxLenSubarrayMap(int nums[], int n, int S)
{
    std::unordered_map<int, int> map;

    int CurSubarrSum            = 0; 
    int LongestArrayIndexEnd    = 0;
    int LongestArrayLen         = 0;

    //Map stores combination of starting index and length
    map[0] = -1;

    for( int i =  0; i<n; i++ )
    {
        CurSubarrSum += nums[i];


        //if a sum is seen for a first time, insert this sum into the map
        if( map.find(CurSubarrSum)==map.end() ) 
        {
            map[i] = CurSubarrSum;
        }

        //if there is a sum equal to CurrentSum - DesiredSum in the map
        //it means there is a subarray between the current index, and 
        //the  beginning index of the array having this sum

        if((map.find(CurSubarrSum - S) != map.end()) && (LongestArrayLen < i - map[CurSubarrSum - S]))
        {
            LongestArrayLen         = i - map[CurSubarrSum - S];
            LongestArrayIndexEnd    = i;
                std::cout<<CurSubarrSum<<"|"<<LongestArrayIndexEnd - LongestArrayLen +1<< " | " << LongestArrayLen <<std::endl;
        }
    }

    std::cout<<"[ "<< nums[LongestArrayIndexEnd - LongestArrayLen] << " ... "<< nums[LongestArrayIndexEnd]<<" ]"  <<std::endl;
    std::cout<<LongestArrayIndexEnd - LongestArrayLen +1<< " | " << LongestArrayLen <<std::endl;
}

//Naive solution O(n^2)
void findMaxLenSubarrayNaive(int nums[], int n, int S)
{
    int CurSubarrLenght = 0;
    int CurSubarrSum    = 0; 

    int LongestArrayIndexStart  = 0;
    int LongestArrayLen         = 0;

    for( int i =  0; i<n; i++ )
    {
        CurSubarrSum = 0;
        CurSubarrLenght = 0;

        for( int j =  i; j<n; j++ )
        {
            CurSubarrSum+=nums[j];
            CurSubarrLenght++;

            if(CurSubarrSum == S && CurSubarrLenght>LongestArrayLen)
            {
                LongestArrayIndexStart = i;
                LongestArrayLen = CurSubarrLenght;
            }

            if((n - i) < LongestArrayLen)
            {
                break;
            }
        }
    }

    std::cout << "[";

    for(int i = LongestArrayIndexStart; i<(LongestArrayLen+LongestArrayIndexStart); i++)
    {
        std::cout << " " << nums[i] ;
    }
    
    std::cout<<" ]"<<std::endl;
    std::cout<<LongestArrayIndexStart<<" | "<<LongestArrayLen<<std::endl;

}
 
int main(void)
{
    int nums[]  = {-5, 8, -14, 2, 4, 12};//{ 10, 5, 2, 7, 1, 9 };//{ 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int iSum    = -5;//15;//8;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findMaxLenSubarrayNaive(nums, n, iSum);
    //findMaxLenSubarrayMap(nums, n, iSum);

    return 0;
}