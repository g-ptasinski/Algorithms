#include <iostream>
 
/* Function to find index of a zero to be replaced to form the longest sequence of ones*/

void findIndex(int A[], int n)
{
    int prevZeroIndex   = -1;
    int maxZeroIndex    = -1;
    int Count           = 0;
    int maxCount        = 0;

    for(int i = 0; i<n; i++)
    {
        //traverse the array, count the number of ones before the current and the next 0 
        if(A[i])
        {
            Count++;
        }
        else if(!A[i]) //we encounter zero
        {
            Count           = i - prevZeroIndex;
            prevZeroIndex   = i;

            if(Count > maxCount)
            {
                maxCount       = Count;
                maxZeroIndex   = prevZeroIndex;
            }
        }
    }

    std::cout << maxZeroIndex << std::endl;
}
 
int main(void)
{
    int A[] = { 0, 0, 1, 1, 1, 1, 0, 1, 1, 0 };

    int n = sizeof(A)/sizeof(int);
 
    findIndex(A, n);
 
    return 0;
}