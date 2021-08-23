#include <stdio.h>

int main(void) {
    
    int n,i=1,sum=0;
    scanf("%d",&n);
    
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    
    
    if(sum==n)
    {
       printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
	// your code goes here
	return 0;
}

