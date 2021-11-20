#include<stdio.h>
#include<stdlib.h>
int findGCD(int a,int b)
{
	int i,gcd;
	for(i = 1; i <= a && i <= b; i++)
	{
		if((a % i == 0) && (b % i == 0))
		{
			gcd = i;
		}
	}
	return gcd;
}
int main()
{
	int a,b,gcd;
	printf("\nEnter two numbers :" );
	scanf("%d %d",&a,&b);
	gcd=findGCD(a,b);
	printf("\nGCD of %d and %d is %d",a,b,gcd);
	return 0;
}
