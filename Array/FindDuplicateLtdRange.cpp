#include <iostream>
#include <vector>
 
/* Function to sort a binary array in linear time 
and in constant space */

int findDuplicate(std::vector<int> const &nums)
{
    int n = nums.size();

    std::vector<bool> visited(n+1);

    for(int i: nums)
    {
        if(visited[i])
        {
            return i;
        }

        visited[i] = true;
    }

    return -1;
}
 
int main(void)
{
    std::vector<int> nums = {1 , 2 , 2 , 3 , 4 , 5 , 6 , 7}; 

    std::cout<<findDuplicate(nums)<<std::endl;

    return 0;
}