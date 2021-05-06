#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0;
    int *p;
    p=(int*)calloc(3,sizeof (int));
    for(i=0;i<3;i++)
    {p[i]=i;
     sum=sum+p[i];
    }
    free(p);
    printf("%d",sum);

}
