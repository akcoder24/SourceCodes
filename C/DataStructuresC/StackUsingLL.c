#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node  //Structure defining 
{
    int value;
    struct node* link; //point to the stucture
};
struct node* top=NULL; 
int isEmpty()
{
	if(top==NULL)
		return 1;
	else
		return 0;
}
void push(int data)
{
    struct node* newNode; //creating a new node 
    newNode = (struct node*)malloc(sizeof(struct node)); //Memory allocation
    newNode -> value= data;
    { 
        newNode -> link = top;
    }
        top=newNode;
        printf("\nInserted");
}
void pop()
{
    if(isEmpty()==1)
    {
        printf("\nStack is empty");
    }
    else
    {
        struct node *delEle= top;
        top= delEle-> link;
        free(delEle);
    }
}
void display()
{
   if(isEmpty()==1)
    {
        printf("\nStack is empty");
    }
   else
   {
      struct node *temp = top;
      while(temp->link != NULL)
      {
	    printf("%d  ",temp->value);
	    temp = temp -> link;
      }
      printf("%d  ",temp->value);
   }
}
void main()
{
   int choice, value;
   printf("\n----Stack using Linked List----\n");
   while(1)
   {
      printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
     
      switch(choice)
      {
	    case 1: printf("Enter the value to be insert: ");
		        scanf("%d", &value);
		        push(value);
		        break;
	    case 2: pop(); break;
	    case 3: display(); break;
	    case 4: exit(0);
	    default: printf("\nWrong selection!!! Please try again!!!\n");
        }
   }
}