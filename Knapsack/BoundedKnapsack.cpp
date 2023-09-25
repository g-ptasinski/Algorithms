#include <iostream>
#include <algorithm>
#include <cstdlib>

int max (int a , int b)
{
  return( (a > b) ? a : b );
}

int solve(int iCapacity , int iNumberOfItems , int values[] , int weights[])
{
  int Memory[iCapacity][iNumberOfItems];

  

  return 0;
}

int main(int argc, char *argv[])
{
  int iKnapsackCapacity;
  int iNumberOfItems;

  if( argc==3 )
  {
    iKnapsackCapacity = atoi(argv[1]);
    iNumberOfItems    = atoi(argv[2]);
  }
  else
  {
    iKnapsackCapacity = 10;
    iNumberOfItems    = 5;
  }

  int values[iNumberOfItems];
  int weights[iNumberOfItems];

  int solution = solve(iKnapsackCapacity, iNumberOfItems, values, weights);



  return 0;
}
