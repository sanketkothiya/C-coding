#include<stdio.h>
#include<conio.h>
int f=-1,r=-1;
int s[5];
void main()
{
    int e=0,valf,valr;
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
            insertformfront(valf);
            break;
        case 2:
            printf("Enter the value to be insert\n");
            scanf("%d",&valr);
            insertformrear(valr);
            break;
        case 3:
            
            break;
        }
    }
}

void insertfromfront(int val)
{
    if(f==0 && r==4 || r+1==f)
    {
        print("The queue is overflow\n");
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
    if(f==0 && r==4 || r+1==f)
    {
        print("The queue is overflow\n");
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















