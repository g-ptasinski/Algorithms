#include <stdio.h>
#include <iostream>
#include <array>
#include <algorithm>

int Merge(std::array<int,10>& A, int start_index, int n)
{

}

void MergeSort(std::array<int,10>& A, int start_index, int n)
{
    if(start_index >= n)
    {
        return;
    }

    int pivot = Partitioning(A, start_index , n);

    QuickSort(A, start_index, pivot-1);
    QuickSort(A, pivot+1, n);
}


int main()
{
    std::array<int,10> A = { 1, 0, 23, 22, 61, 120, 410, 278, -340, -41};
    int n = sizeof(A)/sizeof(A[0]);
    std::cout<<n<<std::endl;
    for(auto& i : A)
    {
        std::cout<< i <<  " " ;
    }
    std::cout<<std::endl;
    
    QuickSort(A , 0 , n-1);

    std::cout<<std::endl<<"Post sorting: "<<std::endl;
    for(auto& i : A)
    {
        std::cout<< i <<  " " ;
    }

    std::cout<<std::endl;

    return 0;
}