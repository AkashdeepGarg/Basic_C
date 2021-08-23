#include<stdio.h>
#include<string.h>

int main(){
    int t,l,i,j;
    int a,b,count;

    char s[1001];

    scanf("%d",&t);
    while (t--)
    {
        count=0;
        scanf("%s",s);
        l=strlen(s);
        if(l%2==0){
            a=l/2;
            b=a-1;
        }
        else{
            a=l/2+1;
            b=a-2;
        }
        for(i=a;i<=l-1;i++){
            for(j=0;j<=b;j++){
                if(s[i]==s[j]){
                    s[j]='0';
                    s[i]='1';
                    count++;
                }
            }
        }
        if(count==l/2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }    
    return 0;
}
