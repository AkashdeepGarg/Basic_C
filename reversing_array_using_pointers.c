#include <stdio.h>

int main(void) {
	// your code goes here
	int n,A[100];
	scanf("%d",&n);
	for(int i=0;i<100;i++)
	{
	    A[i]=0;
	}
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&A[i]);
	}
	int *p1 = A;
	int *p2 = A + n -1;
	while(p1<p2)
	{
	    int temp = *p2;
	    *p2 = *p1;
	    *p1 = temp;
	    *p1++;
	    *p2--;
	}
	for(int i=0;i<n;i++)
	{
	    printf("%d ",A[i]);
	}
	return 0;
}
