#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void push(char);
int pre(char);
char pop();
int top=0;
char s[20];
char in[20];
void main()
{
    int i;
    char n;
    char temp[2];
    char pos[20]={'\0'};
    s[top]='#';
    printf("Enter the infix equation\n");
    gets(in);
    for(i=0;in[i]!='\0';i++)
    {
        n=in[i];
        while(pre(n)<=pre(s[top]))
        {
            temp[0]=pop();
            strcat(pos,temp);
        }
        push(n);
    }
    while(s[top]!='#')
        {
            temp[0]=pop();
            strcat(pos,temp);
        }
        puts(pos);
}
void push(char value)
{
    top++;
    s[top]=value;
}
char pop()
{
    top--;
    return(s[top+1]);
}
int pre(char A)
{
    if(isalpha(A))
    {
        return 4;
    }
    else if(A=='+'||A=='-')
    {
        return 1;
    }
    else if(A=='*'||A=='/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

