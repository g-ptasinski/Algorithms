#include <iostream>
#include <unordered_map>

//Find a pair of a given sum

//Consider all possible pair O(n^2)
void FindPairNaive(int A[], int n, int iSum)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(A[i]+A[j]==iSum)
            {
                std::cout<<"Pair found: "<<A[i]<<"+"<<A[j];
                return;
            }
        }
    }
    std::cout<<"Pair not found"<<std::endl;
    return;
}

//Use hash table 
//Time complexity O(n*log(n))
void FindPairHash(int A[], int n, int iSum)
{
    std::unordered_map<int,int> hashTable;

    for(int i = 0; i<n; i++)
    {
        if(hashTable.find(iSum-A[i]) != hashTable.end())
        {   
            std::cout<<"Pair found: "<< A[i] << "+" << A[hashTable[iSum-A[i]]] ;
            return;
        }

        hashTable[A[i]] = i;

    }
    std::cout<<"Pair not found"<<std::endl;
    return;
}
 
int main(void)
{
    int A[] = { 8, 7, 2, 5, 3, 1, 0, 5, 20 , 13 };

    int n = sizeof(A)/sizeof(int);
    
    int iSum = 5; 

    FindPairNaive(A, n, iSum);
    FindPairHash(A, n, iSum);
 

    return 0;
}