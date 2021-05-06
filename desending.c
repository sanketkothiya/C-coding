#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[10],n,k;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
              if(a[i]<a[j])
              {
                  k=a[i];
                  a[i]=a[j];
                  a[j]=k;
              }
          }

     }
      for(i=0;i<n;i++)
      {
        printf("a[%d]=%d",i,a[i]);
      }
}
