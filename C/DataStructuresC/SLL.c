#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
void createLinkedList(int limit)
{
	struct node *newNode,*temp;
	int data,i;
	head= (struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("\nCouldnt allocate memory");
		exit(0);
	}		
	
    // Input data of node from the user
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = head;
    for(i=2; i<=limit; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}

void insertBegin(int data)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = head; 
		head = newNode;          
		//printf("DATA INSERTED SUCCESSFULLY\n");
    }
}
void insertMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = NULL;
		temp = head;
        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            newNode->next = temp->next; 
            temp->next = newNode;
			//printf("DATA INSERTED SUCCESSFULLY\n");
        }
        /*else
        {
            //printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }*/
    }
}
void insertEnd(int data)
{
    struct node *newNode, *temp;
	newNode = (struct node*)malloc(sizeof(struct node));
	if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = NULL; 
		temp = head;
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;
		temp->next = newNode;
		//printf("DATA INSERTED SUCCESSFULLY\n");
    }
}
void deleteNode()
{
    struct node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        secondLastNode = head;
        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }
		if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
            secondLastNode->next = NULL;
        }
        free(toDelete);
		//printf("SUCCESSFULLY DELETED LAST NODE OF LIST\n");
    }
}

void traverseLinkedList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
    temp = head;
    while(temp != NULL)
    {
        printf("%d\t", temp->data); 
        temp = temp->next;                
    }
}
void main()
{
	int choice=0,data,pos,n;
	while(choice!=7)
	{
		printf("1.Create list\n2.Insert beginning\n3.Insert middle\n4.Insert end\n5.Delete\n6.Traverse\n7.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the limit");
				scanf("%d",&n);
				createLinkedList(n);
				break;
			case 2:
				printf("\nEnter the data");
				scanf("%d",&data);
				insertBegin(data);
				break;
			case 3:
				printf("\nEnter the data and position");
				scanf("%d%d",&data,&pos);
				insertMiddle(data,pos);
				break;
			case 4:
				printf("\nEnter the data");
				scanf("%d",&data);
				insertEnd(data);
				break;
			case 5:
				deleteNode();
				break;
			case 6:
				traverseLinkedList();
				break;
			case 7:
				exit(0);
			default:
				printf("\nEnter valid choice");
				
				
		}
	}
}
