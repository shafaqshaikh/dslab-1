#include<stdio.h>
#define 5
int main()
{
int a[5];
void insert(int a[],int pos,int num);
void search(int a[],int num);
void delete(int a[],int pos);
void display(int a[]);
insert(a,1,1);
insert(a,2,12);
insert(a,3,13);
insert(a,4,14);
insert(a,5,15);
printf("the num after insertion \n");
display(a);
search(a,4);
display(a);
delete(a,1);
printf("num after deletion \n");
return 0;
}
void insert(int a[],int pos,int num)
{
int i;
for(i=4;i>=pos;i--)
{
a[i]=a[i-1];
}
a[i]=num;
}
void search(int a[],int num)
{
int i;
for(i=0;i<no;i++)
{
if(num==a[i])
break;
}
printf("element %d is at %d",num,i+1);
if(i==n)
printf("%d is not present"num);
}
void delete(int a[],int pos)
{
int i;
for(i=pos;i<=4;i++)
{
a[i-1]=a[i];
}
a[i-1]=0;
}
void display(int a[])
{
int i;
for(i=0;i<=4;i++)
{
printf("%d\t",a[i]);
}
}
