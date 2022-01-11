//Explained below in description. Problem-Input-Output

#include <iostream>
using namespace std;

int
main ()
{
  int n;
  cin >> n;

  while (n > 0)
    {
      int i, N, rec = 0;
      cin >> N;

      int A[N];
      A[-1] = -1;
      for (i = 0; i < N; i++)
	{
	  cin >> A[i];
	}

      for (i = 0; i < N; i++)
	{
	  if (i == 0)
	    {
	      if (A[i] > A[i + 1])
		rec++;
	    }
	  else if (A[i - 1] < A[i])
	    {
	      if (A[i] > A[i + 1])
		{
		  rec++;
		}
	    }
	  else if (i == (N - 1))
	    {
	      if (A[i] > A[i - 1])
		rec++;
	    }
	}
      std::cout << rec << std::endl;

      n--;
    }

  return 0;
}
