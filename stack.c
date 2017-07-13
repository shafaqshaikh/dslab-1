#include<stdio.h>
#define MAX-SIZE 10
int stack[MAX-SIZE],top=-1;
int isfull(){
//returns 1 if stack is full else returns -1
if(!isfull)

	retun(top==MAX-SIZE-1)?1:-1;
}
int isempty(){
//returns 1 if stack is empty else -1
if(!isempty)
return(top==-1)?1:-1;
}
int peek(){
//return element at top of stack
retun stack[top];
}
void push(int e){
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
void pop(){
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
int main(){
	int choice,e;
	do{
		display menu 1.peek 2.push 3.pop 4.exit
		printf("enter your choice");
		take input in choice variable
		switch(choice){
			case 1://call peek function
			break;
			case 2://call push function
			break;
			case 3://call pop function
			break;
			case 4://call exit(0) function or return 0;
			defualt:invalid choice
		}while
	}
