#include <stdio.h>
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
	return -1;
}
int main(void)
{
    int arr[50],n,i,x;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    printf("\nEnter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter element to be searched");
	scanf("%d",&x);
    int result = search(arr, n, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at postion %d", result+1);
    return 0;
}
