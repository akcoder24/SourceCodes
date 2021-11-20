#include<stdio.h>
#include<conio.h>
#define MAX 50
int stack[MAX],top=-1;
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int isFull()
{
	if(top==MAX)
		return 1;
	else
		return 0;		
}
void push(int data)
{
	if(!isFull())
	{
		top++;
		stack[top]=data;
	}
	else
		printf("\nStack is full");
}
int pop()
{
	int data;
	if(!isEmpty())
	{
		data=stack[top];
		top=top-1;
		return data;
	}
}
void main()
{
	int i,n,data;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",data);
		push(data);
	}
	printf("\nThe elements are:");
	while(!isEmpty()) 
	{
      int data = pop();
      printf("%d\n",data);
   }
}
