#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("enter the first array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
     printf("enter the second array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]*b[j][i]+a[i][j]*b[j][i]+a[i][j]*b[j][i];
        }
        printf("\n");
    }
    printf("your multiplication is\n");
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n%d",c[i][j]);
        }
        printf("\n");
    }


}
