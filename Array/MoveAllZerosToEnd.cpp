#include <stdio.h>
#include <algorithm>
#include <iostream> 

//O(n) requires only one traversal
//Maintains relative position of elements
void MoveZeros(int A[], int n)
{
    int j = 0;

    for(int i = n; i >= 0; i--)
    {
        j = i;

        while(!A[j] && j!=n )
        {
            std::swap(A[j], A[j+1]);
            j++;
        }
    }
}

int main()
{
    int A[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
    int n = sizeof(A)/sizeof(A[0]);

    for(auto & element : A)
        {std::cout<<element;}
    std::cout<<""<<std::endl;
    
    MoveZeros(A, n-1);
    
    for(auto & element : A)
        {std::cout<<element;}
    std::cout<<""<<std::endl;

    return 0;
}