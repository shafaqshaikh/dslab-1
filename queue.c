#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull()
{
	
	return rear==MAX_SIZE-1;
	
}

int isEmpty()
{

	return rear==-1 && front==-1;
	
}

int display()
{

	return queue[front];
}

void insertQueue(int d)
{
	if(!isFull())
	{
		if(isEmpty())
		{
		front++;
	    }
	rear++;
	queue[rear]=d;
	printf("YOUR ELEMENT IS SUCESSFULLY INSERTED=%d",queue[rear]);
    }	
	else
    printf("Queue is full element cannot be inserted");	
}


void deleteQueue()
{
	int d;
	if(!isEmpty())
	{
	d=queue[front];
	  if(front==rear)
	  {
		  front=rear=-1;
	   }
	 }
	else
	{
	front++;
    }
	printf("THE ELEMENT DELETED IS %d",d);
    
    
}	
	


int main(){
	int choice,e;
	do
	{
		
		printf("\nEnter\n1.DISPLAY\n2.Insert\n3.delete\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);	
		switch(choice){
			case 1:
			    if(isEmpty())
			    printf("queue is empty");
			    else
			    {
				e=display();
				printf("\nElement at the front of queue is : %d",e);
			    }
				break;
			case 2:
				printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e);
				insertQueue(e);
				break;
			case 3:
				deleteQueue();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Choice");
				break;				
		}
	}while(1);
	return 0;
}
output:
Enter
1.DISPLAY
2.Insert
3.delete
4.Exit
Enter your choice: 2

Enter the elment to be inserted: 3
YOUR ELEMENT IS SUCESSFULLY INSERTED=3
Enter
1.DISPLAY
2.Insert
3.delete
4.Exit
Enter your choice: 2

Enter the elment to be inserted: 4
YOUR ELEMENT IS SUCESSFULLY INSERTED=4
Enter
1.DISPLAY
2.Insert
3.delete
4.Exit
Enter your choice: 1

Element at the front of queue is : 3


