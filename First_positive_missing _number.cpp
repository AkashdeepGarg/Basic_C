//This code returns the first positive missing number in given array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    int B[n];
    
    for (i = 0; i < n; i++)
    {
        if(A[i]>0){
            B[k]=A[i];
            k++;
        }
	}
	for(i=0;i<k;i++){
	    for(int j=i+1;j<k;j++){
	        if(B[j]>B[j+1]){
	            int temp = B[j+1];
	            B[j+1] = B[j];
	            B[j] = temp;
	        }
	    }
	}
	int j=1;
	for(i=0;i<k;i++){
	    if(B[i]!=j){
	        cout << j;
	        break;
	    }
	    else
	    j++;
	}
    

    return 0;
}
