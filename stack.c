#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE[10]
int stack(MAXSIZE),top=-1;
int isFull()
{
	//return 1 if stack is full else return -1
	if(top==MAXSIZE)
	return 1;
	else return -1;
}
int isEmpty(){
	//return 1 if stack is empty else return -1
	if(top==-1)
	return 1;
	else return -1;
}
int peek(){
	//return element at the top of stack
	return stack[top];
	}	
void push(int e){
	//insert an element into stack
	if(!isFull)
{	++top;
	stack(top)=e;
	printf("successful inserted");
	}
	else printf("stack overflow");
}
void pop()
{
	int d;
	if(!isEmpty)
	{
		d=stack[top];
		--top;
		printf("element successfully deleted");
		}
		else{
			printf("stack underflow");
			}
}
int main(){
	int choice,e;
	do
	{display menu 1.peek 2.push 3.pop 4.exit
		printf("enter your choice");
		scanf("%d",&choice)
		switch(choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			}
		}
	}
