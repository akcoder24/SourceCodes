/*Program to sort using bubble sort in descending*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,temp,n,m[100],a;
	printf("\nEnter a limit : ");
	scanf("%d",&n);
	printf("\nEnter the list : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(m[j]<m[j+1])
			{
				temp=m[j];
				m[j]=m[j+1];
				m[j+1]=temp;
			}
		}
		printf("\n");
		for(a=0;a<n;a++)
			printf("\t%d",m[a]);
	}
	printf("\nThe sorted array is :");
	for(i=0;i<n;i++)
		printf("\t%d",m[i]);
}
