//This gives the starting and ending index of first subarray with add to a given number S.
//Starting index of array is assumed 1 here not 0.
//With a little modification (Remove line-32,35,36). It can given starting and ending indexes of all subarray which add to a given number S.

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n,S,s=0,i,j,k;
    cin>>n;
    cin>>S;
    int A[n];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    
    for (i = 0; i < n; i++)
    {

      for (j = i; j < n; j++)
	{
	  int sum1 = 0;
	  for (k = i; k <=j; k++)
	    {
	      sum1 += A[k];
	    }
	    if(sum1==S){
	       cout<<"["<<i+1<<","<<j+1<<"]"<<endl;
	       s=1;
	   }
	   
	   if(s==1)
	   break;
	}

    }
    

    return 0;
}
