#include <iostream>
 

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

    return 0;
}