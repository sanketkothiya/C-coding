#include<stdio.h>
#include<conio.h>
int f=-1,r=-1;
int s[5];
void insertfromfront(int);
void insertfromrear(int);
void deletefromfront();
void deletefromrear();
void main()
{
    int e=0,i,valf,valr;
    printf("Enter 1 for enter from front\nEnter 2 for enter from rear\nEnter 3 for delete from front\nEnter 4 for delete from rear\nEnter 5 for display\nEnter 6 for exit\n");
    while(e!=6)
    {
        printf("Enter the choise mention above\n");
        scanf("%d",&e);
        switch(e)
        {
        case 1:
            printf("Enter the value to be insert\n");
            scanf("%d",&valf);
            insertfromfront(valf);
            break;
        case 2:
            printf("Enter the value to be insert\n");
            scanf("%d",&valr);
            insertfromrear(valr);
            break;
        case 3:
            deletefromfront();
            break;
        case 4:
            deletefromrear();
            break;
        case 5:
            if(r!=-1)
            for(i=r;i!=f ||i==f;i--)
            {
                printf("s[%d]=%d\n",i,s[i]);
                if(i==0)
                {
                    i=5;
                }
                if(i==f)
                {
                    break;
                }
            }
            else{
                printf("QUEUE IS EMPTY\n");
            }
        }
    }
}

void insertfromfront(int val)
{
    if((f==0 && r==4 )|| r+1==f)
    {
        printf("The queue is overflow\n");
    }
    else if(f==-1 && r==-1){
        r=0;
        f=0;
        s[f]=val;
    }
    else if(f==0)
    {
        f=4;
        s[f]=val;
    }
    else{
        f--;
        s[f]=val;
    }
}


void insertfromrear(int val)
{
    if((f==0 && r==4 )|| r+1==f)
    {
        printf("The queue is overflow\n");
    }
    else if(f==-1 && r==-1){
        r=0;
        f=0;
        s[r]=val;
    }
    else if(r==4)
    {
        r=0;
        s[r]=val;
    }
    else{
        r++;
        s[r]=val;
    }
}
void deletefromfront()
{   int d;
    if(r==-1 && f==-1)
    {
        printf("The queue underflow\n");
    }
    else if(f==r)
    {
     d=s[f];
     f=-1;r=-1;
     printf("Value deleted is %d\n",d);
    }
    else if(f==4)
    {
     d=s[f];
     f=0;
     printf("Value deleted is %d\n",d);
    }
    else{
         d=s[f];
     f++;
     printf("Value deleted is %d\n",d);
    }
}



void deletefromrear()
{   int d;
    if(r==-1 && f==-1)
    {
        printf("The queue underflow\n");
    }
    else if(f==r)
    {
     d=s[r];
     f=-1;r=-1;
     printf("Value deleted is %d\n",d);
    }
    else if(r==0)
    {
        d=s[r];
        r=4;
        printf("Value deleted is %d\n",d);
    }
    else{
         d=s[r];
     r--;
      printf("Value deleted is %d\n",d);
    }
}












