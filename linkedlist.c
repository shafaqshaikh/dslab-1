#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list{
	int data;
	struct linked_list *next;
	
	}node;
	void print(node *q)
	{
		node *ptr;
		ptr=q;
		printf("\n");
		while(ptr!=null)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
			
			}
	}
void insbeg(node **q,int no)
{
node *temp,*ptr;
temp=*q;
ptr=(node *)malloc(sizeof(node));
ptr->data=no;
if(temp==null)
ptr->next=null;
else
ptr->next=temp;
*q=ptr;
printf("\nelement of linkedlist\n");
print(*q);	
	}	
void insend(node *q,int no)
{
node *ptr,*temp;
ptr=(node *)malloc(sizeof(node));
ptr->data=no;
ptr->next=null;
temp=*q;
if(temp==null)
*q=ptr;
else{
	while(temp->next!=null)
	temp=temp->next;
	temp->next=ptr;
	
	}	
	}
void insafter(node *q,int no)
{
	int loc,k;
	node *temp,*ptr,*old;
	temp=q;
	ptr=(node *)malloc(sizeof(node *));
	ptr->data=no;
	printf("enter location no\n");
	scanf("%d",&loc);
	for(k=1;k<loc;k++)
	{
		if(temp==null)
		printf("element are less then location");
		else
		{
			old=temp;
			temp=temp->next;
			}
		}
	ptr->next=ptr;
	printf("\n element of linked list after insertion\n");
	print(q);
	}
	int main()
	{
		node *start,*ptr,*next;
		int i,n,j,no,c;
		printf("enter no of node");
		scanf("%d",&n);
		printf("\n enter 1 node");
		start=(node *)malloc(sizeof(node));
		temp=start;
		for(i=1;i<n;i++)
		{
			ptr=(node *)malloc(sizeof(node));
			printf("enter no",i+1);
			scanf("%d",&ptr->data);
			temp->next=ptr;
			temp=ptr;
}
temp->next=null;
do{
	printf("\nenter choice");
	printf("\n\n1.insert\n2.delete\n3.traverse\n4.exit");
	scanf("%d"&j);
	switch(j)
	{
	case 1:printf("enter no to be inserted");
	scanf("%d",&no);
	printf("\n\n1.beg\n2.after\n3.end");
	scanf("%d",&c);
	switch(c)
	{
		case 1:insbeg(&start,no);
		break;
		case 2:insafter(&start,no);
		break;
		case 3:insend(&start,no);
		break;
		default:printf("invalid choice");
		break;
		}
		break;
case 2:printf("enter no to be delete\n");
       scanf("&start",no);
       del(&start,no);
       break;
case 3:traverse(start);
break;
case 4:exit(0);
default:printf("invalid choice");
break;       	
		}
	}while(1)
		return 0;
		}
void del(node **q,int no)
{
	int f=0;
	node *old,*temp;
     temp=*q;
     while(temp!=null)
     {
		 if(temp->data=no)
		 {
			 f=1;
			 if(temp==*q)
			 *q=temp->next;
			 else
			 old->next=temp->next;
			 free(temp);
			 break;
			 }
			 else
			 {
				 old=temp;
				 temp=temp->next;
				 }
				 if(f==0)
				 printf("\ngiven no is not found");
				 print(*q);
				 }	
	
	
	
	}	
	void traverse(node *q)
	{
		printf("\n\ntraversin linked list\n");
		print(q);
		printf("\n\tend of list\n");
		}
	
