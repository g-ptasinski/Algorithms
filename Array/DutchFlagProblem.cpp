#include <stdio.h>
 

// Linear time partition routine to sort an array containing 0, 1, and 2.
// It is similar to 3–way partitioning for the Dutch national flag problem.
void threeWayPartition(int A[], int end)
{
    
}
 
void naiveSort(int A[], int end)
{
    int counter[]={0,0,0};

    for(int i = 0; i<=end; i++)
    {
        (A[i]>0) ? ((A[i]>1) ? counter[2]++ : counter[1]++ ) : counter[0]++;
    }

    for(int i = 0; i<=end; i++)
    {
        if(counter[0])
        {
            A[i]=0;
            counter[0]--;
        }
        else if(counter[1])
        {
            A[i]=1;
            counter[1]--;
        }
        else if(counter[2])
        {
            A[i]=2;
            counter[2]--;
        }
        else return;
    }

}

int main()
{
    int A[] = { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 };
    int n = sizeof(A)/sizeof(A[0]);
 
    threeWayPartition(A, n - 1);
    naiveSort(A, n - 1);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
 
    return 0;
}