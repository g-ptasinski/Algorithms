#include <stdio.h>
#include <iostream>
#include <array>
#include <algorithm>
 

//O(n^2) 
void InsertionSort(std::array<int,10>& A, int n)
{
    for(int i = 1; i<n; i++)
    {
        int j = i;

        while(A[j] < A[j-1] && j>0)
        {
            std::swap(A[j], A[j-1]);

            j = j-1;
        }

    }
}


int main()
{
    std::array<int,10> A = { 1, 0, 23, 22, 61, 120, 410, 278, -340, -41};
    int n = sizeof(A)/sizeof(A[0]);

    for(auto& i : A)
    {
        std::cout<< i <<  " , " ;
    }
    std::cout<<std::endl;
    InsertionSort(A , n);


    std::cout<<std::endl<<"Post sorting: "<<std::endl;
    for(auto& i : A)
    {
        std::cout<< i <<  " , " ;
    }

    std::cout<<std::endl;

    return 0;
}