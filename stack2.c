#include<stdio.h>
#include<conio.h>
int s[10];
int n=10;
int top=-1;
void main()
{
    int x=10,b,num,z,i;
    printf("the menu|\n\n\n\n\ 1. for push\n 2. for pop\n 3. for peep\n 4. for update\n 5. for display");
    while(x!=0)
    {
        printf("enter the number");
        scanf("%d",&z);
        switch(z)
        {
        case 1:
            printf("enter number to push\n");
            scanf("%d",&b);
            push(b);
            break;
        case 2:
            printf("number is poped\n");
            pop();
            break;
        case 3:
            printf("enter index\n");
            scanf("%d",&b);
            num=peep(b);
            printf("number at %d position is %d\n",b,num);
            break;
        case 4:
            printf("enter index\n");
            scanf("%d",&i);
            printf("enter number to update");
            scanf("%d",&b);
            update(i,b);
            break;
        case 5:
            printf("display element are \n");
            for(i=0;i<top+1;i++)
            {
                printf("%d\n",s[i]);

            }
            break;
        }
    }
    printf("final array is \n");
    {
        for(i=0;i<top+1;i++)
        {
            printf("%d\n",s[i]);
        }
    }
}
void push(int b)
{
    if(top>n-1)
    {
        printf("array is overflow");
    }
    else
    {
        top++;
        s[top]=b;
    }
}
void pop()
{
    if(top<0)
    {
        printf("array is underflow");

    }
    else
    {
        top--;
        return(s[top]);
    }
}
int peep(int i)
{
    if(top-i+1<0)
    {
        printf("number not is range");

    }
    else
    {
        return(s[top-i+1]);
    }
}
void update(int i,int b)
{
    if(top-i+1<0)
    {
        printf("not in range");

    }
    else
    {
        s[top-i+1]=b;
        printf("%d",s[top-i+1]);
    }
}
