#include <stdio.h>

int main(void) {
	// your code goes here
	int A[3],i=0, temp=0;
	for(i=0;i<3;i++)
	{
	    scanf("%d",&A[i]);
	}
	for(i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
	    {
	        if(A[j]>A[j+1])
	        {
	            temp=A[j+1];
	            A[j+1]=A[j];
	            A[j]=temp;
	        }
	    }
	}
	printf("%d",A[3]);  
	return 0;
}

