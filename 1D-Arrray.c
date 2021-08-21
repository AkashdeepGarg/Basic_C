#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num[1000];
    int n,i=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
        sum = sum + num[i];
    }   
    printf("%d",sum);
    return 0;
}
