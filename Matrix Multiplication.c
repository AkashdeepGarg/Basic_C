#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2;
    int A[100][100],B[100][100],C[100][100];
    printf("Enter the dimensions of matrix A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the dimensions of matrix B: ");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter the elements of Matrix A ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("\n %d",&A[i][j]);
            }
        }
        printf("Enter the elements of Matrix B ");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("\n %d",&B[i][j]);
            }
        }
    
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                int sum=0;
                for(k=0;k<r2;k++)
                {
                    C[i][j]=A[i][k]*B[k][j];
                    sum=sum+C[i][j];
                }
                C[i][j]=sum;
            }
            
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Given two matrices can not be multiplied.");
    }
    return 0;
}