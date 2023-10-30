#include <stdio.h>
#include <iostream>
#include <array>
 

//O(n) requires only one traversal
void InsertionSort(std::array<int,10>& A)
{
    for(auto& i : A)
    {

        std::cout<< i <<std::endl;
    }
}


int main()
{
    std::array<int,10> A = { 0, 1, 23, 22, 61, 120, 410, 278, -340, -41};
    int n = sizeof(A)/sizeof(A[0]);

    for(auto& i : A)
    {
        std::cout<< i <<  " , " ;
    }
 
    InsertionSort(A);

    for(auto& i : A)
    {
        std::cout<< i <<  " , " ;
    }

    std::cout<<"/n";

    return 0;
}