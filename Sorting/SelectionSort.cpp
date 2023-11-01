#include <stdio.h>
#include <iostream>
#include <array>
#include <algorithm>
 

//O(n^2), in-place, stable
void SelectionSort(std::array<int,10>& A, int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int LocalMinIndex = i;
        int j = i;

        while(j<n)
        {

            if(A[j]<A[LocalMinIndex])
            {
                LocalMinIndex = j;
            }
        
            j++;
        }

        std::swap(A[i], A[LocalMinIndex]);
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
    SelectionSort(A , n);


    std::cout<<std::endl<<"Post sorting: "<<std::endl;
    for(auto& i : A)
    {
        std::cout<< i <<  " , " ;
    }

    std::cout<<std::endl;

    return 0;
}