#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch,s[100] ;
    ch = getchar();
    putchar(ch);
    printf("\n");
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");//to avoid new line character as input to next string
    gets(s);
    puts(s);
    return 0;
}
