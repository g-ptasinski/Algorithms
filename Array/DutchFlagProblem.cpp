#include <stdio.h>
 
void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

//O(n) requires only one traversal
void ThreeWayPartition(int A[], int end)
{
    int start   = 0;
    int mid     = 0;
    int pivot   = 1;
    while(mid<=end)
    {
        if( A[mid] < pivot )
        {
            swap(A,start,mid);
            start++;
            mid++;
        }
        else if( A[mid] > pivot )
        {
            swap(A,mid,end);
            end--;
        }
        else 
        {
            mid++;
        }
    }
}

//O(n), requires 2 traversals, linear time 
void NaiveSort(int A[], int end)
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
 
    ThreeWayPartition(A, n - 1);
    //NaiveSort(A, n - 1);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
 
    return 0;
}