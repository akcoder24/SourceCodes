#include<stdio.h>
/*void add(int a,int b,int *sum)
{
	*sum=a+b;
}*/
void add(int, int, int);
void main()
{
	int x,y,total;
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&y);
	add(x,y,&total);
	printf("The sum of the numbers are %d",total);
}
void add(int a,int b,int *sum)
{
	*sum=a+b;
}

