#include<stdio.h>
int main()
{
        int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        if (i>j)
                        printf("0 ");
                        else
                        printf("%d ",a[i][j]);
                        
                }
                printf("\n");
        }
}
