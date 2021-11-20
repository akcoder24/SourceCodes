/*To find the even elements in an array*/
/*12-10-20208*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],n,i,count;
	printf("\nEnter the limit");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			count=count+1;
		}
	}
	printf("\n%d is the count.",count-1);
	for(i=n-1;i>0;i--)
	{
		if(arr[i]%2!=0)
		{
			printf("%d \t",arr[i]);
		}
	}
	
}
