#include <stdio.h>
 
#define MAX 50
 
void insert();
void display();
void middle();
int queue_array[MAX];
int temp_queue[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice,add_item;
    while (choice!=4)
    {
        printf("Name:Akila B\nRoll No:20MIA1052\n");
        printf("*******************************************\n");
        printf("1.Insert element to queue \n");
        printf("2.to remove the middle element \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("Inset the element in queue : ");
        scanf("%d", &add_item);
            insert(add_item);
            break;
            case 2:
            middle();
            break;
            case 3:
            display();
            break;
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
 
void insert(int add_item)
{
    //int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
void middle()
{
    int count=0;
    for(int i=0;i<(rear/2);i++)
    {
        temp_queue[i]=queue_array[i];
        front=front+1;
    }
    front++;
    //printf("%d",&n);
    for(int i=0;i<rear/2;i++)
    {
        front--;
        queue_array[front]=temp_queue[i];
    }

}
/* void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        front = front + 1;
    }
} /* End of delete() */ 
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} 