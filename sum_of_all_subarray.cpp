//Given an integer array ‘arr[]’ of size n
//This program prints sum of all sub-arrays of given array.

#include <iostream>
using namespace std;

int
main ()
{
  int n, i, j, k;
  cin >> n;
  int A[n];
  for (i = 0; i < n; i++)
    {
      cin >> A[i];
    }
  int sum = 0;

  for (i = 0; i < n; i++)
    {

      for (j = i; j < n; j++)
	{
	  int sum1 = 0;
	  for (k = i; k <=j; k++)
	    {
	      sum1 += A[k];
	    }
	  sum += sum1;
	}

    }
  cout<< "The sum of all subarrays: ";
  cout << sum << endl;

  return 0;
}
