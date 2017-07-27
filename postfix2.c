#include <stdio.h>
#include <ctype.h>
typedef struct conversion
{
	int a[30];
	int top;
}stack;

void push(int, stack *s);

int pop(stack *s);

int operation(int a, int b, char opr);

int evaluate(char postfix[]);

int main()
{
	char postfix[30];
	printf("\nenter the postfix expression\n");
	scanf("%s",postfix);
	printf("Evaluated posfix expression = %d\n",evaluate(postfix));
	return 0;
}

int pop(stack *s)
{
    int d,top=s->top;
    if(top!=-1)
    {
		d=s->a[top];
        s->top=s->top-1;
		return d;
    }
}

void push(int e, stack *s)
{
    int top=s->top;
    if(top<29)
	{
		s->a[++(s->top)]=e;
	}
}

int operation(int a, int b, char opr)
{
	switch(opr)
	{
		case '+': return a+b;
		break;
		case '-': return a-b;
		break;
		case '*': return a*b;
		break;
		case '/': return a/b;
		break;
	}
	return 0;
}

int evaluate(char postfix[30])
{
	int i,a,b,result;
	stack s;
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isdigit(postfix[i]))
			push(postfix[i]-'0',&s);
		else 
		{
			a=pop(&s);
			b=pop(&s);
			result=operation(a,b,postfix[i]);
			push(result,&s);
		}
	}
	return pop(&s);
}
