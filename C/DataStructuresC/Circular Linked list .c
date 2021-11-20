#include <stdio.h>
#include <stdlib.h>

typedef struct Node1
{
    int data;
    struct Node1 *next;
}Node;

Node * head;

//Creating list and inserting at the end
void create_list()
{
	Node *new_node = NULL;
    new_node = (Node *)malloc(sizeof(Node));
    
    
    int no,new_data,i;
    
    printf("Enter no of nodes in list:");
    scanf("%d", &no);
    
    //Getting element from user
    printf("Enter element: ");
    scanf("%d", &new_data); 
    
    //Inserting value into node
    new_node->data=new_data;
    new_node->next=NULL; 
    head=new_node; 
    
    Node *curr = head; //Current Node
    
    for( i=1;i<no;i++)
    {
        printf("Enter next element: ");
       
    scanf("%d", &new_data); 
     
    new_node = (Node *)malloc(sizeof(Node));
    
    //Inserting value into node
    new_node->data=new_data;
    new_node->next=NULL; 
       
    curr->next=new_node;
    curr=curr->next;
    }
    
    curr->next=head;  
      
    
}

void insert_first()
{
	Node *curr=head,*new_node = NULL;
    new_node = (Node *)malloc(sizeof(Node));
    
    
    int no,new_data,i;
    
       
    //Getting element from user
    printf("Enter element: ");
    scanf("%d", &new_data); 
    
    //Inserting value into node
    new_node->data=new_data;
    new_node->next=head; 
	

	while(curr->next!=head)
	{
		curr=curr->next;
	}
	
	//curr=curr->next; //Reaching last node  
	
	curr->next=new_node;
	head=new_node;	
	
	
	
}

void insert_end()
{
	int new_data;
	Node * curr=head;
	Node * new_node;
	
	printf("Enter element");
	scanf("%d", &new_data);
		
		//Inserting in the end
	new_node = (Node *)malloc(sizeof(Node));
	new_node->next=NULL;
	new_node->data=new_data;
	
	while(curr->next!=head)
	{
		curr=curr->next;
	}
	
	curr->next=new_node;
	new_node->next=head;
}

void insert_after()
{
	int old_ele,new_ele;
	Node *curr = head;
	Node *new_Node;
	
	printf("After which element do you want to insert ?");
	scanf("%d", &old_ele);
	
	printf("Enter element to insert");
	scanf("%d", &new_ele);
	
	new_Node = (Node *)malloc(sizeof(Node));
	new_Node->data=new_ele;
	
	while(curr->data!=old_ele) //when loop breaks, curr will be updated
	{
		curr=curr->next;
	}
	
	new_Node->next=curr->next;
	curr->next=new_Node;
	


	
}

void delete_first()
{
	Node *curr=head,*temp = head;
	
	
	while(curr->next!=head)
	{
		curr=curr->next;
	}
	
	head=temp->next;//
	curr->next=head; 
		
	free(temp);
}

void delete_select() 
{
	int old_ele;
	Node *curr = head;
//	Node *temp;
	Node *prev;
	
	
	printf("Which element do you want to delete ?");
	scanf("%d", &old_ele);
	
	while(curr->data!=old_ele) //when loop breaks, curr will be updated
	{
		prev=curr;
		curr=curr->next;
		printf("head= %d", curr->data);
	}
	
//	temp=curr->next;
	prev->next=curr->next;
	
	free(curr);
	
	
}

void delete_last() 
{
	Node *curr = head;
	Node *prev;
	
	while(curr->next!=NULL) //when loop breaks, curr will be updated
	{
		prev=curr; 
		curr=curr->next;
	}
	
	
	prev->next=head;
			
	free(curr);
}

void display()
{
	Node *temp = head;
    
    
    
	while(temp->next!=head) 
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    
    printf("%d", temp->data); 
    printf("\n");
    
    printf("The head node is %p",head);
    printf("\n");
    printf("The temp node is %p",temp->next);
}


void main()
{ 

  int ch,i;
    Node *new_head= NULL;
    
           
    do 
    {
    printf("\n Enter choice: ");
    scanf("%d", &ch);
    
    switch(ch)
    {
        case 1: 
        create_list();
        break;
           
        case 2: 
        insert_first();
        printf("Debug \n"); 
        break;
        
        case 3:
        insert_end();
        break;
        
        case 4: 
        insert_after();
        break;
		
		case 5: 
        delete_first();
        break;
        
	    	        
        case 6: 
        delete_select();
        break;
        
        case 7: 
        delete_last();	
        break;
        
                     
    	case 8: 
        display();
        break;
           
        case 9: 
        exit(1);
        break; 	
        
        default:
            printf("Incorrect choice"); 
            continue;
            
            }
    
    } while(ch!=9);
    
}
