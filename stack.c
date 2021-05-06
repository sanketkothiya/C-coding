#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#define max 5

int top=-1,stack[max];

void push();
void pop();
void display();
 void main()
 {

     int ch;
     while(1)
     {
         printf("\n***stack menu***");
         printf("\n\n1.push\n2.pop\n3.display\n4.exit");
         printf("\n\nenter your choice(1-4):");
         scanf("%d",&ch);

         switch(ch)
         {
             case 1: push();
             break;

             case 2: pop();
             break;

             case 3: display();
             break;

             case 4: exit(0);

             default: printf("\nwrong choice!!");



         }
     }

 }

 void pop()
 {
     if(top==-1)
     {
         printf("\nstack is empty");
     }
     else
     {
         printf("\ndelete element is %d",stack[top]);
         top=top-1;

     }
 }
 void display()
 {
     int i;
     if (top==-1)
     {
         printf("stack is empty");

     }
     else
     {
         printf("\nstack is ...\n");
         for(i=top;i>=0;i--)
         {
             printf("%d\n",stack[i]);
         }
     }
 }
