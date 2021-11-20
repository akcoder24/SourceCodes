#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* root;
struct node *create()
{
	//struct node *p;
	int x;
	printf("Enter data(-1 for no data):");
	scanf("%d",&x);
	
	if(x==-1)
		return NULL;
	
	struct node* p = (struct node*)malloc(sizeof(struct node));
	p->data=x;
	
	printf("Enter left child of %d:\n",x);
	p->left=create();
 
	printf("Enter right child of %d:\n",x);
	p->right=create();
	
	return p;
}

int leafCount(struct node* node)
{
    if(node == NULL)	
	    return 0;
    if(node->left == NULL && node->right==NULL)	
	    return 1;			
    else
	    return leafCount(node->left)+leafCount(node->right);
}

struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
	return(node);
}

int main()
{
    struct node *root;
	root=create();
    printf("Left leaf count of the tree is %d", leafCount(root));
	getchar();
    return 0;
}

