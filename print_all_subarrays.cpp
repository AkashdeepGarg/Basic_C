//This function returns all the possible subarrays of given array.

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
  

  for (i = 0; i < n; i++)
    {

      for (j = i; j < n; j++)
	{
	    cout<<"[ ";
	  for (k = i; k <=j; k++)
	    {
	      cout << A[k] << " ";
	    }
	    cout<<"]";
	  cout<<endl;
	}

    }
    return 0;
}
