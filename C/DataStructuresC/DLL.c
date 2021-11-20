#include <stdio.h>
#include <stdlib.h>
struct node   //DLL node creation
{
	int info;
	struct node *prev, *next;
};
struct node* start = NULL; //Assigning it to null
void traverse()
{
	struct node* temp; 
    if (start == NULL)
		printf("\nList is empty\n");      //Declaring a new temp node 
	else
	{
		temp = start;
		while (temp != NULL) 
        {
			printf("%d ",temp->info);
			temp = temp->next;
		}
	}
}
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data; //Assigns The data to the data part of linked list
	temp->prev = NULL; //Assigns the first node to null to make the added node as the first
	temp->next = start; //Assigns the next node as the start that point to the prev of the next node
	start = temp;
}
void insertAtEnd()
{
	int data;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;  //Assigns the prev and next nodes to null
	temp->next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);  
	temp->info = data; //Assigns data to the data part of the node
	temp->next = NULL; //Assigns the next as null so that the node is the last node	
    trav = start;
	if (start == NULL) 
    {
        start = temp;
	}
	else 
    {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;      //Assigns the previous node to pint at the next node of the previous node of the list
		trav->next = temp;
	}
}
void insertAtPosition()
{
	int data, pos, i = 1;
	struct node *temp, *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;
	printf("\nEnter position : ");
	scanf("%d", &pos);
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	newnode->info = data;   //Assigns the data to the data part of the linked list
	temp = start;
	if (start == NULL) 
    {
		start = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
	}
	else if (pos == 1) 
    {
		newnode->next = start;
		newnode->next->prev = newnode;
		newnode->prev = NULL;
		start = newnode;
	}
	else 
    {
		while (i < pos - 1) 
        {
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		temp->next->prev = newnode;
	}
}
void deleteFirst()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else 
    {
		temp = start;
		start = start->next;
		if (start != NULL)
			start->prev = NULL;
		free(temp);
	}
}
void deleteEnd()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	temp = start;
	while (temp->next != NULL)
		temp = temp->next;
	if (start->next == NULL)
		start = NULL;
	else 
    {
		temp->prev->next = NULL;
		free(temp);
	}
}
void deletePosition()
{
	int pos, i = 1;
	struct node *temp, *position;
	temp = start;
	if (start == NULL)
		printf("\nList is empty\n");
	else 
    {
		printf("\nEnter position : ");
		scanf("%d", &pos);
		if (pos == 1) {
			position = start;
			start = start->next;
			if (start != NULL) 
            {
				start->prev = NULL;
			}
			free(position);
			return;
		}
		while (i < pos - 1) 
        {
			temp = temp->next;
			i++;
		}
		position = temp->next;
		if (position->next != NULL)
			position->next->prev = temp;
		temp->next = position->next;
		free(position);
	}
}
int main()
{
	int choice;
	while (1) 
    {

		printf("\n1.Display list");
		printf("\n2.Insert at beg");
		printf("\n3.Insert at end");
		printf("\n4.Insert at any position");
		printf("\n5.Delete first element");
		printf("\n6.Delete last element");
		printf("\n7.Delete element at nth pos");
		printf("\n8.Exit");
		printf("\nEnter Choice :");
		scanf("%d", &choice);

		switch (choice) 
        {
		    case 1:
			    traverse();
			    break;
		    case 2:
			    insertAtFront();
			    break;
		    case 3:
			    insertAtEnd();
			    break;
		    case 4:
			    insertAtPosition();
			    break;
		    case 5:
			    deleteFirst();
			    break;
		    case 6:
			    deleteEnd();
			    break;
		    case 7:
			    deletePosition();
			    break;
            case 8:
			    exit(1);
			    break;
		    default:
			    printf("Incorrect Choice\n");
		}
	}
	return 0;
}

