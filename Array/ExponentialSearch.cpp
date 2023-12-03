/* Given a sorted array of n integers and a target value, 
determine if the target exists in the array or not in logarithmic time. 
If the target exists in the array, return the index of it.  */

#include <iostream>

void ExpoSearch(int A[], int n, int iSum , int low, int high)
{
    int mid      = low+(high - low)/2;

    std::cout<<high<<" "<< mid << " "<< low<< std::endl;

    if( A[mid] == iSum )
    {
        std::cout << "Sum found at index: "<< mid <<std::endl;
    }
    else if (A[low+mid]>iSum)
    {
        int iNewHigh = mid;
        int iNewLow  = low;
        ExpoSearch(A, n, iSum, iNewLow, iNewHigh);
    }
    else
    {
        int iNewHigh = high;
        int iNewLow  = mid;
        ExpoSearch(A, n, iSum, iNewLow, iNewHigh);    
    }   

    if(low>=high)
    {
        std::cout<<"Sum not found"<<std::endl;
    }

    return;
}

void InterpolationSearch(int A[], int n, int iSum , int low, int high)
{
    int mid      = low+(high - low)/2;

    std::cout<<high<<" "<< mid << " "<< low<< std::endl;

    if( A[mid] == iSum )
    {
        std::cout << "Sum found at index: "<< mid <<std::endl;
    }
    else if (A[low+mid]>iSum)
    {
        int iNewHigh = mid;
        int iNewLow  = low;
        ExpoSearch(A, n, iSum, iNewLow, iNewHigh);
    }
    else
    {
        int iNewHigh = high;
        int iNewLow  = mid;
        ExpoSearch(A, n, iSum, iNewLow, iNewHigh);    
    }   

    if(low>=high)
    {
        std::cout<<"Sum not found"<<std::endl;
    }

    return;
}

int main(void)
{
    int A[] = {0, 0, 0, 1, 1, 1, 2, 3, 5, 7, 9, 10 ,12, 16, 14};

    int n = sizeof(A)/sizeof(int);
    
    int iSum = 5; 

    ExpoSearch(A, n, iSum , 0, n-1);

    return 0;
}