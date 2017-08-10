#include<stdio.h>
#include<stdlib.h>
#define max-size 10
int stack[max-size],top=-1;
int isfull()
{
//return 1 if stack is full else return -1
return top=max-size-1;
}
int isempty()
{
//return 1 if stack is empty else return -1
return top==-1;

}
int peek()
{
//return element at top of stack
return stack(top);

}
void push(int e)
{
//insert an element into stack
if(!isfull)
{
top++;
stack[top]=e;
printf("element %d succesfully inserted",e);

}
else{
printf("stack overflow");

}
}
void pop()
{
int d;
if(!isempty())
{
d=stack[top];
top--;
printf("element deleted");
}
else{

printf("stack overflow");
}
}
int main()
{
int choice,e;
do
{
printf("\t\tmenu\n1.peek\n2.push\n3.pop\n4.exit");
printf("enter your choice");
scanf("%d",&choice);
{
case 1:e=peek();
       printf("\nelement at top of stack is:%d",e);
       break;
case 2:printf("\nenter element to insert");
       scanf("%d",&e);
       push(e);
       break;
case 3:pop();
       break;
case 4:exit(0);
      break;
default:printf("invalid choice");
       break;
       }
}while(1)
return 0;
}
