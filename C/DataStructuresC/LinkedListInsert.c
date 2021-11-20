#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void push(struct Node **head, int new_data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = *head;
	*head = new_node;
}
void print(struct Node *node)
{
	while (node != NULL)
	{
		printf(" %d ", node->data);
		node = node->next;
	}
}
void main()
{
	struct Node* head = NULL;
	push(&head, 7);
	push(&head, 1);
	push(&head, 5);
	printf("\n Created Linked list is: ");
	print(head);
}

