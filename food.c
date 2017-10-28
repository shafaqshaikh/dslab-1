/*
 * Foodmanagement.c
 *
 *  Created on: Jan 25, 2012
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct food
{
	char fname[30];
	int data[50];
	float price[50];
	int stock[10];
	struct food *next;
}node;

node *create(int n)   //creating a database
{
	int i;
	node *head,*p;
	head=NULL;
	p=NULL;
	head=(node*)malloc(sizeof(node));
	printf("\nENTER FOOOD NAME:\t");
	scanf("%s",head->fname);
	printf("\nENTER PRICE\t");
	scanf("%f",head->price);
	printf("\nENTER STOCK:\t");
	scanf("%d",head->stock);
	head->next=NULL;
	p=head;
	for(i=1;i<n;i++)
	{
		p->next=(node*)malloc(sizeof(node));
		p=p->next;
		p->next=NULL;
		printf("\nENTER THE FOOD NAME:\t");
		scanf("%s",p->fname);
		printf("ENTER PRICE:\t");
		scanf("%f",p->price);
		printf("ENTER STOCK:\t");
		scanf("%d",p->stock);

	}
	return (head);
}
void display(node *head)
{
	node *temp;
	if(head==NULL)
		printf("\nNO FOOD IS PRESENT\n");
	else
	{
	temp=head;
	printf("FOOD ITEMS ARE:\n");
	while(temp!=NULL)
	{
		printf("%s\n",temp->fname);
		printf("%f\n",temp->price);
		printf("%d\n",temp->stock);
		temp=temp->next;
	}
	}
}

int Insertafter(node *head)
{
	int kdata;
	int flag=0;
	node *temp,*p;
	printf("ENTER DATA NO");
	scanf("%d",&kdata);
	p=(node*)malloc(sizeof(node));
	printf("\nENTER THE  NAME OF THE FOOD:\t");
	scanf("%s",&p->fname);
	printf("\nENTER DATA:\t");
	scanf("%d",&p->data);
	printf("ENTER PRICE:\t");
	scanf("%f",&p->price);
	printf("ENTER STOCK:\t");
	scanf("%d",&p->stock);
	p->next=NULL;
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		temp=head;
		while(temp!=NULL&&temp->data!=kdata)
			temp=temp->next;
		if(temp->data==kdata)
		{

			p->next=temp->next;
			temp->next=p;
			flag=1;
		}
	}
	if(flag==0)
		printf("DATA NOT FOUND");
	return flag;
}

int delete(node *head)
{
	node *temp,*ptr;
	int kdata;
	int flag=0;
	temp=head;
	printf("ENTER THE DATA YOU WANT TO DELETE:\t");
	scanf("%d",&kdata);
	if(head!=NULL)
	{
	if(head->next!=NULL)
	{
	if(temp->data==kdata)
	{
		head=head->next;
		flag=1;
		free(head);
	}
	else
	{
		ptr=head->next;
		while(ptr!=NULL)
		{
			if(ptr->data==kdata)
			{
				temp->next=ptr->next;
				flag=1;
				free(ptr);
			}
			temp=ptr;
			ptr=ptr->next;
		}
	}
	}
	else if(head==NULL)
		printf("\nNO DATA IS PRESENT");
	}
	if (flag==0)
		printf("\DATA NOT FOUND");
	return flag;
}
int search(node*head)
{
	int kdata;
	int flag=0;
	printf("ENTER THE DATA YOU WANT TO search:\t");
	scanf("%d",&kdata);
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==kdata)
		{
			 printf("DATA IS FOUND IN THE LIST\n NAME OF FOOD:\t%s,temp->fname");
			 printf("\nFOOD DATA:\t%d",temp->data);
			 printf("\nPRICE:\t%f",temp->price);
			 printf("\t stock:\t%d",temp->stock);
			 flag=1;
			 break;
		}
		temp=temp->next;
	}
	if (flag==0)
		printf("\nDATA NOT FOUND");
	return flag;
}
int main()
{
	int n,choice,result;
	node *h;
	h=NULL;
	do
	{
		printf("\n\t---------------MENU-------------------------");
		printf("\nENTER 1 FOR CREATING A FOODLIST\n");
		printf("\nENTER 2 FOR DISPLAYING YOUR FOODLIST\n");
		printf("\nENTER 3 FOR INSERTING A FOOD AFTER AN ANOTHER FOOD\n");
		printf("\nENTER 4 FOR DELETING ANY FOOD FROM THE FOODLIST\n");
		printf("\nENTER 5 TO SEARCH ANY FOOD\n");
		printf("\nEnter 0 for exit\n");
		printf("\nENTER YOUR CHOICE\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nENTER THE MAXIMUM SIZE OF YOUR FOODLIST\n");
				   scanf("%d",&n);
				   h=create(n);
				   break;
			case 2:display(h);
				   break;
			case 3:result=Insertafter(h);
				  if (result==1)
					  printf("\nFOOD SUCESSFULLY INSERTED");
				  else
					  printf("\nFOOD IS NOT INSERTED");
				  break;
			case 4:result=delete(h);
					if (result==1)
						printf("\nFOOD SUCESSFULLY DELETED");
					 else
						 printf("\nFOOD IS NOT DELETED");
					break;
			case 5:result=search(h);
					if(result==1)
						printf("\nFOOD IS FOUND");
					else
						printf("\nFOOD IS NOT FOUND");
					break;

			case 0:exit(0);
				   break;



		}
	}while(1);
	return 0;
}
