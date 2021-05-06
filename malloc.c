#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0;
    int *p;
    for(i=0;i<10;i++)
    {
        p=(int*)malloc(sizeof (int));
        *p=i;
        sum=sum+(*p);
    }
    free(p);
    printf("%d",sum);
}
