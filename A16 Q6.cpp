#include<stdio.h>
int main()
{
        int a[3][3]={1,2,3,4,5,6,7,8,9};
        int b[3][3]={1,2,3,4,5,6,7,8,9};
        int c[3][3],i,j,sum,s;
        for(i=0;i<3;i++)
        { sum=0;
                for(j=0;j<3;j++)
                        sum+=a[i][j];
                printf("sum of row element %d ",sum);
                printf("\n");
        }
        for(j=0;j<3;j++)
        { s=0;
           for(i=0;i<3;i++)
           {
                s+=a[i][j];
    }
                printf("Sum of colums %d ",s);
                printf("\n");
        }
}
