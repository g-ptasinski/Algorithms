#include <stdio.h>
#include <iostream>
#include <array>
#include <algorithm>
 

//O(n^2), in-place, stable
void BubbleSort(std::array<int,10>& A, int n)
{
    bool counter = true;

    while(counter)
    { 
        counter = false;

        for(int i = 0 ; i < n ; i++)
        {
            if(A[i+1]<A[i])
            {
             std::swap(A[i], A[i+1]);
             counter = true;   
            }
        }
    }
}


int main()
{
    std::array<int,10> A = { 1, 0, 23, 22, 61, 120, 410, 278, -340, -41};
    int n = sizeof(A)/sizeof(A[0]);

    for(auto& i : A)
    {
        std::cout<< i <<  " " ;
    }
    std::cout<<std::endl;
    
    BubbleSort(A , n);

    std::cout<<std::endl<<"Post sorting: "<<std::endl;
    for(auto& i : A)
    {
        std::cout<< i <<  " " ;
    }

    std::cout<<std::endl;

    return 0;
}