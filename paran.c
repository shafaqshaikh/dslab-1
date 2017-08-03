#include <stdio.h>
#include <ctype.h>
typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(char, stack *s);
void checkcontinuity(char []);
char pop(stack *s);

int main()
{
	char exp[30];
	printf("\nenter an expression containing only brackets\n");
	scanf("%s",exp);
	checkcontinuity(exp);
	return 0;
}

char pop(stack *s)
{
    int d,top=s->top;
    if(top!=-1)
    {
		d=s->a[top];
        s->top=s->top-1;
		return d;
    }
}

void push(char e, stack *s)
{
    int top=s->top;
    if(top<29)
	{
		s->a[++(s->top)]=e;
	}
}
int ismatching(char left,char right)
{
switch(left)
{
case '(':if(right==')')
         return 1;
         else return 0;
         break;
case '[':if(right==']')
         return 1;
         else return 0;
         break;      
case '{':if(right=='}')
         return 1;
         else return 0;
         break;
default: return 0;            
	}	
	}
void checkcontinuity(char exp[])
{
int i;
char c;
stack s;
 s.top=-1;
for(i=0;exp[i]!='\0';i++)
{
if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
push(&s,exp[i]);
else
if(s.top==-1)
c=pop(exp[i]);
else
{
printf("invalid expression");
return 0;
if(c==exp[i])
continue;
else
printf("invalid expression");
return 0;
if(s.top==-1)
printf("valid expression");
else
printf("invalid expression");	
	}	
}
}
	
	
	
	
	
	
	

