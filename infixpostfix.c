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
	char infix[30],postfix[30];
	printf("\nenter infix expression\n");
	convert(infix,postfix);
	printf("\n\npostfix expression\n%s",postfix);
	return 0;
}
void convert(char in[],char post[])
{
	char opr;
	stack s1;
	int j=0,i;
	s1.top=-1;
	for(i=0;in[i]!='\0';i++)
	{
		if(isalpha(in[i]))
		post[j++]=in[i];
		if(in[i]=='(')
		push(&s1,in[i]);
		if(in[i]=='+'||in[i]=='-'||in[i]=='/'||in[i]=='*')
		{
			if(s1.top!=-1)
			{
				opr=pop(&s1);
				while(priority(opr)>=priority(in[i]))
				{
					post[j+1]=opr;
					opr=pop(&s1);
					}
					push(&s1,opr);
					push(&s1,in[i]);
}
else
push(&s1,in[i]);
}
if(in[i]==')')
{
	opr=pop(&s1);
	while(opr='(')
	{
		post[j++]=opr;
		opr=pop(&s1);
	}
	push(&s1,opr);
	push(&s1,in[i]);
}
else
push(&s1,in[i]);
}
if(in[i]==')')
{
	opr=pop(&s1);
	while(opr!='(')
	{
		post[j++]=opr;
		opr=pop(&s1);
	}
}
while(s1.top!=-1)
post[j++]=pop(&s1);
post[j]='\0';
}
int priority(char c)
{
if(c=='+'||c=='-')
return 1;
else
(c=='*'||c=='/');
return 2;
}
}
	
	
