#include<stdio.h>
int main()
{
        int i,j,a[3][3],count=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                scanf("%d",&a[i][j]);
        }
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        if(a[i][j]==0)
                        count++;
                }
        }
        if(count<(i*j)/2)
        printf("Given matrix is not sparse matrix");
        else
        printf("Give matrix is sparse matrix");
        
}
