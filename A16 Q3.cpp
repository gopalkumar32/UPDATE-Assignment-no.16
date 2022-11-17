#include<stdio.h>
int main()
{
        int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
        printf("Original matrix is\n");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("%d ",a[i][j]);
                        printf("\n");
        }
        printf("Transpose of given matrix\n");
        for(j=0;j<3;j++)
        {
                for(i=0;i<3;i++)
                        printf("%d ",a[i][j]);
                        printf("\n");
        }
}
