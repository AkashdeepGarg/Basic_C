#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float a,b;
    scanf("%d",&x);
    scanf("%d",&y);
	scanf("%f",&a);
    scanf("%f",&b);
    printf("%d",(x+y));
    printf(" %d",x-y);
    printf("\n%.1f",a+b);
    printf(" %.1f",a-b);
    
    return 0;
}
