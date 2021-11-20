/*Program to sort array using selection sort*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,min,n,temp,m[100];
	printf("\nEnter the limit : ");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	for (i=0;i<n;i++)
		scanf("%d",&m[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(m[j]<m[min])
				min=j;
		}
		if(min!=i)
		{
			temp=m[i];
			m[i]=m[min];
			m[min]=temp;
		}
	}
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
		printf("\t%d",m[i]);
	return 0;
}
/*#include<stdio.h>
#include<conio.h>
main()
{
	if(1<2)
	{
		if(2<3)
		{
			printf("If1\n");
		}
		if(3<4)
		{
			printf("If2\n");
		}
	}
}*/
