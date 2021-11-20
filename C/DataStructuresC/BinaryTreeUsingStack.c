//#include<stdio.h>
int binaryTree[100];
int leftChild(int,int);
void sum(int);
void main()
{
    int n;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    printf("\nEnter the nodes:");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&binaryTree[i]);
    }
    sum(n);
}
int leftChild(int index,int n)
{
    if(binaryTree[index]!=NULL)
    {
        if(index*2<=n)
        {
            return (index*2);
        }
    }
    else
        return -1;
}
void sum(int n)
{
    int sum =0,val;
    for(int i=0;i<n;i++)
    {
        val=leftChild(i,n);
        sum=sum+binaryTree[val];
    }
    printf(" %d ",sum);
}

