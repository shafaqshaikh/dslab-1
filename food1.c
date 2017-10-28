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
	int data;
	float price;
	int stock;
	struct food *next;
}node;

node *insertfood(int n)   //creating a database
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

int order(node*head)
{
	int a;
	char ch;
	int flag=0;
	printf("ENTER THE FOOD FOR ORDER:\t");
	scanf("%s",&ch);
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->fname==ch)
		{
			 printf("ENTER YOUR ATM NO");
			 scanf("%d",&a);
			 flag=1;
			 break;
		}
		temp=temp->next;
	}
	if (flag==0)
		printf("\nFOOD NOT FOUND");
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
		printf("\n1. FOOD MENU\n");
		printf("\n2. ADMIN LOGIN");
		printf("\n3. RULES AND REGULATIONS \n");
		printf("\n4. PROBLEM AND SUGGESTIONS\n");
		printf("\n5. ORDER YOUR FOOD\n");
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
			case 5:result=order(h);
					if(result==1)
						printf("\nORDERD SUCCESFULLY");
					else
						printf("\nFOOD IS NOT FOUND");
					break;

			case 0:exit(0);
				   break;



		}
	}while(1);
	return 0;
}
