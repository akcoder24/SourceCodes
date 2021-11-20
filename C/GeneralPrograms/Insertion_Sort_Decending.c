/*Program to sort an array into a decending order using insertion sort*/

main()
{
	int i,temp,j,m[100],n;
	printf("\nEnter the limit : ");
	scanf("%d",&n);
	printf("\nEnter the list of elements : ");
	for (i=0;i<n;i++)
		scanf("\t%d",&m[i]);
	for(i=1;i<n;i++)
	{
		temp=m[i];
		j=i-1;
		while(j>=0 && m[j]<temp)
		{
			m[j+1]=m[j];
			j=j-1;
		}
		m[j+1]=temp;
	}
	printf("\nThe sorted array is:");
	for (i=0;i<n;i++)
		printf("\t%d",m[i]);
	return 0;
}