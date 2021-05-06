#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10],n,no,pos;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",a[i]);
    }
    printf("enter the position");
     scanf("%d",&pos);
    printf("enter the number");
     scanf("%d",&no);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=no;
    for(i=0;i<n+1;i++)
    {
        printf("\n%d",a[i]);
    }
}


