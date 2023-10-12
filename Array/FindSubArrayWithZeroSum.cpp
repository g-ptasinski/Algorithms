#include <unordered_map>
#include <iostream>

//  Brute force algorithm
//  O(n^3) complexity
void printSubarraysBruteForce(int nums[], int n)
{
    //  iterate over all elements, and for every element 
    //  consider all subarrays starting at this element
    for(int i = 0; i < n; i++)
    {
        int iSum = 0;

        for(int j = i; j < n; j++)
        {
            iSum += nums[j];    

            if(iSum == 0)
            {
                std::cout<<"Subarray: ["<< i << "..." << j << "]" << std::endl;
            }
        }  
    }
}

 
int main()
{
    int nums[]  = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n       = sizeof(nums)/sizeof(nums[0]);

    printSubarraysBruteForce(nums, n);
    //printSubarraysMultimap(nums, n);

    return 0;
}