#include<stdio.h>
#include<ctype.h>
typedef struct stack
{
	char a[30];
	int top;
}stack;
void push(stack *s,char c)
{
	if (s->top>29)
	{	
		printf("stack is full\n");
		return;
    }
	s->top++;
	s->a[s->top]=c;
}
int pop(stack *s)
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
  int operation (int no1,int no2,char opr)
  {
	  switch(opr)
	  {
		 case '+':
		 return no1+no2;
		 case '-':
		 return no1-no2;
		 case '*':
		 return no1*no2;
		 case '/':
		 return no1/no2;
    }
}
 int evaluation (char post[])
 {
	 int result,e1,e2,i=0;
	 char opr;
	  stack s;
	  s.top=-1;
	  while (post[i]!='\0')
	  {
		  opr=post[i];
		  if(isdigit(opr))
			push(&s,opr-')');
		  else
		  {
			e1=pop(&s);
			e2=pop(&s);
			result=operation(e1,e2,opr);
			push(&s,result);
		 }
		 i++;
	  }
	  return pop(&s);
  }
	  
 
int main()
{
	char postfix[30];
	printf("\nENTER POSTFIX EXPRESSION\n");
	scanf("%s",postfix);
	printf("\n\EVALUATION OF POSTFIX EXPRESSION=%d",evaluation(postfix));
	return 0;
}
output:
ENTER POSTFIX EXPRESSION
234+*

ALUATION OF POSTFIX EXPRESSION=-67
