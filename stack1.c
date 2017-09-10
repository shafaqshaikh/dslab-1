#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1;

int isFull()
{
	//returns 1 if stack is full else returns -1
	return top==MAX_SIZE-1;
	
}

int isEmpty()
{
//returns 1 if stack is empty else returns -1
	return top==-1;
	
}

int peek()
{
//return element at the top of stack
	return stack[top];
}

void push(int e)
{
//inserts an element into stack
	if(!isFull())
	{
		top++;//increment the top
		stack[top]=e;
		printf("\nYour element %d is successfully inserted",e);
	}
	else{
	
		printf("\nElement cannot be inserted. Stack Overflow!");
	}
}

void pop()
{

	int d;
	if(!isEmpty())
	{
		d=stack[top];
		top--;
		printf("\nYour element %d is successfully deleted",d);
	}
	else{
		printf("\nElement cannot be deleted. Stack Underflow!");
	}
}

int main()
{
	int choice,e;
	do
	{
		//display menu 1.peek 2.push 3.pop 4.exit
		printf("\nEnter\n1.Peek\n2.Push\n3.Pop\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);	
		switch(choice){
			case 1:
				e=peek();
				printf("\nElement at the top of stack is : %d",e);
				break;
			case 2:
				printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e);
				push(e);
				break;
			case 3:
				pop();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Chice");
				break;				
		}
	}while(1);
	return 0;
}
output:

Enter
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice: 2

Enter the elment to be inserted: 4

Your element 4 is successfully inserted
Enter
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice: 2

Enter the elment to be inserted: 2

Your element 2 is successfully inserted
Enter
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice: 1

Element at the top of stack is : 2
