#include<stdio.h>
#include<ctype.h> //for isaplha () function
typedef struct conversion
{
	char a[30];
	int top;
}stack;

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
}	{
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
	
	
