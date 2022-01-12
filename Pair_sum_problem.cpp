//Optimised method to return index of 2 elements in an array such that their sum is equal to the given number.

#include <iostream>
using namespace std;

int
main ()
{
  int n, i, k, sum=0;
  cin >> n;
  cin>>k;
  int A[n];
  for (i = 0; i < n; i++)
    {
      cin >> A[i];
    }
    int start = 0;
    int end = n-1;
    while(start<end){
        if(A[start]+A[end]==k){
            cout<<start<<", "<<end;
            return true;
        }
        else if(A[start]+A[end]>k){
            end--;
        }
        else{
            start++;
        }
    }
    return 0;
}
