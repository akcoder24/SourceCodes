#include<stdio.h>
void main()
{
	int arr[100],n,flag,i,j,k;
	printf("\nEnter the limit: ");
	scanf("%d",&n);
	printf("\nEnter the elements of an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
    {
    	flag=0;
        for(j=0; j<n; j++)
        {
        	if (i!=j)
            {
		    	if(arr[i]==arr[j])
              	{
                 	flag++;
               	}
            }
        }
       	if(flag==0)
        {
          	printf("%d\t",arr[i]);
        }
	}
}

