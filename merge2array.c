#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    int c[10],i,j;
    for(i=0;i<5;i++)
    {
        j=i*2;
        c[j]=a[i];
        j++;
        c[j]=b[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",c[i]);
}
}
