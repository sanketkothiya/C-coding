#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[3][3],b[3][3],c[3][3]={0},k;
    printf("enter the first array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("\n");
     printf("eneter the second array");
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            scanf("%d",&b[j][k]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(k=0;k<3;k++)
        {
            c[i][k]=0;
            for(j=0;j<3;j++)
            {
                c[i][k]=c[i][k]+(a[i][j]*b[j][k]);
            }
        }
        }
        for(i=0;i<3;i++)
        {
            for(k=0;k<3;k++)
            {
                printf("\t%d",c[i][k]);
            }
            printf("\n");
        }
    }
