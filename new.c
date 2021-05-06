
#include<stdio.h>
#include<conio.h>
enum boolean
{
    false,true
};
int iseven(int x)
{
    if(x%2==0)
        returm(1);
    else
        return(false);
        }
    void main()
    {
        int n;
        enum boolean result;
        printf("enter a number");
        scanf("%d",&n);
        result=iseven(n);
        if(result==true)
            printf("even number");
            else
                printf("odd number");
               getch();
    }
