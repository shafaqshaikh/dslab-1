#include<stdio.h>
#include<ctype.h> //for isaplha () function
typedef struct conversion
{
	char a[30];
	int top;
}stack;
void push(stack*,char)
{
//inserts an element into stack
if(wheter stack is not full)
{
	increment the top
	set top of stack equal e
	msg element e succ inserted
}
else{
	msg stack overflow
}
}
char pop(stack*)
{
//delete an element from top of stack
int d;
f(wheter stack is not empty)
{
	increment the top
	set top of stack equal e
	msg element e succ inserted
}
else{
	msg stack underflow
}
}
char pop(stack*);
void convert(char[],char[]);
int priority(char);
char infix[30],postfix[30];
int main()
{
	char postfix[30];
	printf("\nenter postfix expression\n");
	printf("\n\nevaluation of postfix expression=%d",evaluate (postfix));
	return 0;
}
int operation (int n1,int n2,char opr)
{
	switch(opr)
	{
	case '+':return n1+n2;
	break;
	case '-':return n1-n2;
	break;
	case '*':return n1*n2;
	}
int evaluate(char pos[])
{
int result,i,e1,e2,j;
char opr;
stack s;
s.top=-1;
for(i=0;pos[i]!='\0';i++)
{
	if(isdigit(pos[i]))
	{
	push(&s,e1);
	operation(&s,result);	
		}
		else
		pop(&s,e1,e2);
		return pop(&s);
	}
