#include<stdio.h>
#include<string.h>
// struct node
struct node
{
	char foodname[30];
	int data,stock;
	float price;
	struct Node *next;
	
	};
	typedef struct Node node;
	// global type variable
	node *head,*menu;
	
	int credit_card[20];
	float total_paisa[20];
	char problem_box[20];
	
	
	//function for print any word
	
	void print(char list[])
	{
		printf("%s",list);
		
		
		
		} 
		
		
		

	
	
	// function for main menu
	
	
	foodlist()
	{
	
	printf("1.  \*FOOD MENU                 |\"");
	printf("1.  \*ADMIN LOG IN              |\"");
    printf("1.  \* RULES AND REG            |\"");
	printf("1.  \* PROBLEM AND SUGGESTION   |\"");
	printf("1.  \*EXIT                      |\"");
		
		
		}
		
		
	// function for insert food list
	void insertfood(char foodname[30],int data,int stock,float price)
	{
		node *temp;
		
		temp=(node*)malloc(sizeof(node));
		
		temp->data=data;
		
		temp->stock=stock;

        temp->price=price;
        
        strcpy(temp->foodname,foodname);
        
        temp->next=NULL;
        
        if(head==NULL)
        {
			
			head=temp;
			menu=head;
			
			}
        else
        {
			while(head->next!=NULL)
			{
				head=head->next;
				}
		head->next=temp;		
			
		}
        
      }
      
  // function for print foodlist
   
  void foodlist()
  {
	  node *start;
	  start=menu;
	  
	  printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _ _  _ _ _ _\n");
	  
	  printf(" ITEM NUMBER | FOOD NAME | PRICE | STOCK \n");
	  
	  
	  while(start!=NULL)
	  {
		printf("_ _ _ _  _ _ _  _ _ _ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
		
		
		
		printf(" %d | %s | %d | %f \n",start->data,start->foodname,start->stock,start->price);
		
		printf("_ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ _ _ _ _ _ _ _ _ _ _ __ _ _ _  _ _ _\n");
		
		start=start->next;
		
		
		  }
	}     	
	
	
	
	// function for count total food item
	
	int count()
	{
		int cnt=0;
		node *temp;
		temp=menu;
		
		while(temp!=NULL)
		{
			
			temp=temp->next;
			cnt++;
			
			}
	return cnt;
		
		
		}
	
	
	// total money for order
	
	
	int total_money(int foodchoice,int much)
	{
		
		
		node *temp;
		
		temp=(node*)malloc(sizeof(node));
		
		temp=menu;
		
		while(temp->data != foodchoice)
		{
			temp=temp->next;
			
		}
		
		if(temp->data==foodchoice)
		{
			int o;
			float total=temp->price*much;
			
			printf("TOTAL MONEY FOR YOUR ORDER :");
			
			printf("%.2f",total);
			
			printf("ENTER YOUR TABLE NUMBER :");
			
			scanf("%d",&o);
			
			return total;
			
	}
		
			}
	
	//function for payment
	
	void payment(float money)
	{
		
		
		back_option:
		
		printf("HOW YOU PAY THIS MONEY :");
		
		printf("1.CASH:");		

        printf("2.CREDIT CARD :");		
		
		int choose;
		
		float taka;
		
		scanf("%d",&choose);
		
		if(choose==1)
		{
		 
		 give:
		 
		 printf("HOW MUCH YOU GIVE");
		 
		 scanf("%f",&taka);	
		 
		 if(money>taka)
		 
		{
			 
			 printf("PLEASE GIVE %.2f SOME ALSO",money-taka);
             
             goto give;
             
             
          }	
		 else
		 {
			
			 printf("YOU PABEN %.2f",money-taka);
			 
			 
			 }
		}
		
		else
		if(choose==2)
		{
			int card_num[20],i=0;
			
			printf("PLEASE GIVE YOUR CARD NUMBER :");
			scanf("%d",&card_num[i]);
			credit_card[i]=card_num[i];
			i++;
			printf("THANK YOU SIR :");
	 
			}
			else
			{
				printf("PLEASE ENTER CORRECT PASSWORD SIR/MAM :");
				goto back_option;
				
		
		}
				}
		//function for food order 
		int orderlist()
		{
		int foodchoice,much,i,j,k;
		printf("WHICH PRODUCT ! :");	
		scanf("%d",&foodchoice);	
		i=count();
		if(foodchoice>=1 && foodchoice<=i)
		{
			printf("HOW MUCH YOU NEED :");
			scanf("%d",&much);
	        k=total_money(foodchoice,much);
	        payment(k);
	        return k;
			}
			else{
				printf("ENTER CORRECT ITEM NUMBER PLEASE :\n");
				foodlist();
				goto food_choice;
				
				}
				
			}
		
		//function for inserting new food into list
	/*	void insertfood(int fooddata,char addfood[30],float foodprice,int foodstock)
		{
			node *temp,box;
			temp=(node *)malloc(sizeof(node));
			temp->data=fooddata;
			temp->foodname=addfood;
			temp->stock=foodstock;
			temp->price=foodprice;
			temp->next=NULL;
			box=temp;
			head->next=box;
			box->next=NULL;
			
			
			} */
		
// function for linux size
 void linux()
 {
	 system("TITLE. . . . . . . . . CODE BY FAHMI . . . . . . . . . . . ");
	 system("MADE CON: LINES=35 COLS=120");
	 
	 }		
	//main function
	int main()
	{
		linux();
		
		print(" * * * * *   ** * * *  * * * *  ** * * * * *  ** * * * * * *");
		printf(" * * * * *WELCOME TO OUR RESTURANT * * * * * * * *");
		printf(" * * * * * * * *  ** * * * * ** * * *** * * * * * * * * * * *");
		main_menu:
        
        printf(" * * *ENTER YOUR CHOICE SIR/MADM * * * *\n");		
		foodlist();
		head=NULL;
		insertfood("pizza",1,50,150.50);
		insertfood("burger",2,45,50.75);
		insertfood("sandwich",3,30,60.75);
		insertfood("rice",4,45,70.25);
		insertfood("juice",5,430,80.00);
		int choose,foodstock,fooddata,backmenu;
		float foodprice;
		char choice,addfood[30];
		char problem[2000],problem_box[2000];
        printf(" ---->");scanf("%c",&choice);
		if(choice=='1') //food menu
		{
			food_list:
			printf(" * * * * * *ENTER YOUR CHOICE* * * * * * *");
			foodlist();
			orderlist();
			printf(" * * * * * *THANK YOU FOR CHOOSING * * * * * *");
			another_food;
			printf(" * * * * * *ARE YOU WANT TO BUY ANOTHER FOOD * * * * * * *\n");
			printf(" * PRESS 1 FOR MAIN MENU 2 FOR FOODLIST OR 0 FOR EXIT =>*");
			scanf(" %d",&backmenu);
			switch(backmenu)
			{
			case 1:
			      
			       goto main_menu;
			       break;	
			case 2:
			       
			       goto food_list;
			       break;	
			case 0:
			       
			       line(10);tab(5);printf(" * * * * * * * * * * * * ** THANK YOU SIR* * *  * * * * * * * * \n");line(5);
			       break;	
		   default:
		          printf(" * ENTER VALID OPTION *\n");			
				goto another_food;
				
				
				
				}
			
			}
		else if(choice=='2')
		//admin panel
		{
			
			int pass;
			admin_log;
			printf("ENTER 0 FOR GOTO MAIN MENU:");
			
			printf("ENTER THE PASSWORD :");
			
			scanf("%d",&pass);
			if(pass==15215)
			{
			 choose_option;
			 
			 printf("1. TOTAL MONEY ");
			 printf("2. PROBLEM AND SUGGESTION ");
			 printf("3. ADD FOOD");
			 printf(" 4. DELEE FOOD ");
			 printf("5. ALL CARD NUMBER ");
			 printf("6. TOTAL ITEMB ");
			 printf(" ENTER 0 FOR GOTO MAIN MENU ");	
				
			 scanf("%d",&choose);	
			 if(choose>=0 && choose<=7)
			 {
				 if(choose==1)
				 {
					 
					 int k;
					 
					 orderlist(k);
					 printf("%d",k);
									 
					 
					 }
				else  if(choose==2)
				 {
					 
					 int q=0;
					 printf("%s",problem_box[q]);
					 q++;					 
					 
					 }
					 else if(choose==3)
					 {
						 
						 printf("ENTER LIST NUMBER :");
						 
						 scanf("%d",&fooddata); 
						 
						  printf("ENTER FOOD NAME :");
						 
						 scanf("%s",&addfood); 
						 
						  printf("ENTER FOOD PRICE :");
						 
						 scanf("%f",&foodprice); 
						 
						  printf("ENTER FOOD STOCK  :");
						 
						 scanf("%d",&foodstock); 
						 //insertfood();
						  
						 printf(" SORRY  . . ... . . . . . . . . . WE WORK FOR IMPROVING THIS SOFTWARE :");  
						 }
				     else if(choose==4)
				     {
					 
				      printf("SORRY  .  . . .. . . . ..  .WE WORK FOR IMPROVING THIS SOFTWARE :  **THANK YOU **");	 
						 
						}
				 
				 else if(choose==5)
				 {
					 int k=0;
					 
				     printf("%d",credit_card[k]);
					 k++;
					 
				}
				else if(choose==0)
				{
					
					goto main_memu ;
					}
					else if(choose==6)
					{
					
					
					int total,k;
					 total=count();
					 printf(" OUR TOTAL FOOD %d ITEM",total);
					 admin_panel;
					 
					 printf("ENTER 0 FOR BACK ");
					 scanf("%d",&k);
					 if(k==0)
					 	{
							
							goto choose_option;
							
						}
						else{
							
			                printf("PLEASE ENTER CORRECT PASSWORD ");
							goto admin_panel;
							
						}
					}
				 }	
				 
				else
				 {
					 printf("ENTER BETWEEN 1 AND 7 ");
					 goto choose_option;
					 
					 
					 }
				}
			else {
				 
				 printf(" * * *WRONG PASSWORD  . . . . . .ENTER CORRECT PASSWORD PLEASE ");
				 printf("ENTER 0 FOR GOTO MAIN MENU ");
				 if(pass==0)
				 {
					 
					 goto main_menu;
				 }
				 else
				 goto admin_log;
					 
					 
					 }
			}
			
			else if(choice=='3') //rules and reg
			{
				
				int rules;
				rules_option;
				
				printf("  * * * RULES AND REGULATION * * * * ");
				printf("1. ENTER CORRECT NAME OF FOOD");
	            printf("2.ORDER BETWEEN 2 TO 3 PM ONLY ");
				printf(" 3.CASH ON DELIVERY IS AVAILABLE ");
				printf("4. DO NOT REFUNDABLE AFTER ORDER  ");
				printf("5. ORDER CAN NOT BE CANCEL ");
				printf("6. HELP");
				printf(" * * * * *|| KEEP SMILING AND ENJOY YOUR FOOD|| * * * * *");
                printf("PRESS 0 FOR BACK ");scanf("%d",&rules );
				
				if(rules==0)
				{
					
					
					goto main_menu;
					
				}
				else{
				
				
					
				printf(" ENTER CORRECT PRESS SIR/MADM ");	
				
				goto rules_option;
					
					
					
					
					} 
				 
		}
		
		else if(choose==4) // problem and sug
		{
			
		
		
		int back,m=0;
		
		printf("** ** * * *PLEASE WRITE YOUR PROBLEM OR SUGGESTION  * * * * * *");
		
		gets(problem);	
	    problem_box[m]=problem;
	    m++;
	    
	    
	    
	    printf(" * * * ** * ** * * THANK YOU* * * * * * **  ");
	    back_option;
	    
	    printf(" --------> 0 FOR  BACK");
	    scanf("%d",&back);	
	    
	    if(back==0)
	    {
		
		goto main_menu;
	}
	 else{
		 
		 
		 printf(" ENTER CORRECT PASS SIR/MADM ");
		 goto back_option;
		 
		 
		 
		 }	
			
		}
		else if(choice=='5')  // exit
		{
			
			printf("  * * * * * * * ||  THANK YOU  ||** * * * * * * *  * ** *");
			
			
			}	
			}
			else if(choice >='a' && choice<='z')
			{
				
				printf("PLEASE ENTER NUMBER BETWEEN 1 AND 5 ");
				goto main_menu;
				
				
				
				}
		else
		{
				
				printf("PLEASE ENTER NUMBER BETWEEN 1 AND 5 ");
				goto main_menu;
				
				
				
				}	
			return 0;
			}
		
			
		}
			
			
		
		
		
		
		
	
		
		
		
		
		
		
		
		
		
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		

