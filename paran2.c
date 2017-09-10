#include<stdio.h>
#include<ctype.h> 

typedef struct conversion
{
	char a[30];
	int top;
}stack;

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
}

void push(stack *s,char opr)
{
	if(s->top==29)
	{
		printf("stack is full\n");
		return;
     }
    else
    {
	s->top++;
	s->a[s->top]=opr;
    }
 }   

int isMatchingpair (char left,char right)
{
	 switch(left)
{ 
case '(':if (right==')')
           return 1;
         else
           return 0;
case'[': if (right==']')
           return 1;
         else
           return 0;
case'{':if (right=='}')
          return 1;
        else
          return 0;
default:
         return 0;
	 }
}

void checkcontinuity (char exp[])
{
	int i;
	char c;
    stack s;
	s.top=-1;
	for(i=0;exp[i]!='\0';i++)
	{
		if (exp[i]=='('||exp[i]=='{'||exp[i]=='[')
		   push(&s,exp[i]);
		else
	    {
		if (s.top!=-1)
	     c=pop(&s);
	    else
	    {
	     printf("INVALID EXPRESSION");
	     return;
	    }
	    if(isMatchingpair(c,exp[i]))
	      continue;
	    else
	    { 
	       printf("INVALId EXPRESSION");
	       return;
	     }
	     }
        }
	    if(s.top==-1)
	       printf("EXPRESSION VALID");
	    else
	    {
	      printf("Invalid Expression");
	      return;
	     }
}
	     
int main()
{
	char exp[30];
	printf("ENTER YOUR EXPRESSION CONTAINIG PARENTHESIS:\n");
	scanf("%s",exp);
	checkcontinuity(exp);
	return 0;
}
output:
ENTER YOUR EXPRESSION CONTAINIG PARENTHESIS:
[]{}()
EXPRESSION VALID
