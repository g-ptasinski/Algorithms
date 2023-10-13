#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <stdio.h>

int max (int a , int b)
{
  return( (a > b) ? a : b );
}

int solve(int iCapacity , int iNumberOfItems , int values[] , int weights[])
{
  int Memory[iCapacity][iNumberOfItems];

  if( iCapacity == 0 || iNumberOfItems ==0 ) { return 0; }

  else if ( weights[iNumberOfItems-1] > iCapacity)
  {
    return solve(iCapacity, iNumberOfItems - 1 , values, weights);
  }

  else
  {
    return max(values[iNumberOfItems-1] + solve(iCapacity - weights[iNumberOfItems-1], iNumberOfItems - 1 , values, weights),
            solve(iCapacity, iNumberOfItems - 1 , values, weights));
  }

}

int main(int argc, char *argv[])
{
  int iKnapsackCapacity;
  int iNumberOfItems;

  if( argc==3 )
  {
    iKnapsackCapacity = atoi(argv[1]);
    iNumberOfItems    = atoi(argv[2]);
	
	std::cout<< "Please input value of each item" <<std::endl;
	
	int values[iNumberOfItems];
	int weights[iNumberOfItems];
	
	for(int i=0 ; i<iNumberOfItems ; i++)
	{ 
		std::cin>>values[i];
	}
	
	std::cout<< "Please input weight of each item" <<std::endl;
	
	for(int i=0 ; i<iNumberOfItems ; i++)
	{ 
		std::cin>>weights[i];
	}
	
	std::cout<< solve(iKnapsackCapacity, iNumberOfItems, values, weights) <<std::endl;
  }
  else
  {
    iKnapsackCapacity = 163;
    iNumberOfItems    = 5;
	int values[iNumberOfItems]    = {5, 17, 16 , 90, 21};
	int weights[iNumberOfItems]   = {10, 15, 60, 80, 23};
	
	 std::cout<< solve(iKnapsackCapacity, iNumberOfItems, values, weights) <<std::endl;
  }

  return 0;
}
