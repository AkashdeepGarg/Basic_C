#include <stdio.h>

int main(void) {
	// your code goes here
	int m=0,n,i=0;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
	    i = i*10+n%10;
	    n=n/10;
	}
	if(i==m)
	{
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}
	return 0;
}

