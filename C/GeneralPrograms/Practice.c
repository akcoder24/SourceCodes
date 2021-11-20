#include<stdio.h>
main()
{
	int *arr,n,i;
	printf("\nEnter the limit");
	scanf("%d",&n);
	arr=(int*) malloc (n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(arr+i));
	}
	free();
}
