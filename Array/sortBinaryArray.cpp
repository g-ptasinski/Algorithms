#include <iostream>
 
/* Function to sort a binary array in linear time 
and in constant space */

void sort(int A[], int n)
{
    int iNumberOfZeros = 0;

    for(int i = 0; i < n; i++)
    {
        if( !A[i] )
        {
            iNumberOfZeros++;
        }
    }

    int j = 0;
    while(iNumberOfZeros--)
    {
        A[j++] = 0;
    }

    while( j < n)
    {
        A[j++] = 1; 
    }
}
 
int main(void)
{
    int A[] = { 0, 0, 1, 1, 1, 1, 0, 1, 1, 0 };

    int n = sizeof(A)/sizeof(int);
 
    sort(A, n);
 
    // print the sorted array
    for (int i = 0; i < n; i++) 
    {
        std::cout<<(A[i])<<" ";
    }

    return 0;
}