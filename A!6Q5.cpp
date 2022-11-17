#include<stdio.h>
int main()
{
        int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        if(j==2-i)
                        sum=sum+a[i][j];
                }
        }
        printf("%d ",sum);
}
