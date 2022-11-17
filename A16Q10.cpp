#include<stdio.h>
int main()
{
        int a[3][3]={1,1,3,4,5,6,1,0,2},i,j,k,max,count;
        max=0;
        for(i=0;i<3;i++)
        {       count=0;
                for(j=0;j<3;j++)
                {
                        if(a[i][j]==1)
                        count++;
                }
                if(max<count)
                {
                        max=count;
                        k=i;
                }
        }
        printf("%d",k);
}
