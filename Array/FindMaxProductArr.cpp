#include <iostream>

//Use hash table 
//Time complexity O(n*log(n))
void FindMaxProduct(int A[], int n)
{
    int FirstMax    = 0;
    int SecondMax   = 0;
    int FirstMin    = 0;
    int SecondMin   = 0;
    int BiggestProduct = 0;

    for(int i = 0; i<n; i++)
    {
        if(A[i]>FirstMax)   
        {
            SecondMax = FirstMax;
            FirstMax   = A[i];
        }
        else if(A[i]>SecondMax)  
        {
            SecondMax  = A[i];
        }
        else if(A[i]<FirstMin)   
        {
            SecondMin = FirstMin;
            FirstMin   = A[i];

        }
        else if(A[i]<SecondMin)  
        {
            SecondMin  = A[i];
        }

        BiggestProduct = (FirstMax*SecondMax > FirstMin*SecondMin) ? FirstMax*SecondMax : FirstMin*SecondMin;
    }

    std::cout<<BiggestProduct<<std::endl;

    return;
}
 
int main(void)
{
    int A[] = { -10, -3, 5, 6, -20 };

    int n = sizeof(A)/sizeof(int);
    
    FindMaxProduct(A, n);

    return 0;
}