#include<stdio.h>
main()
{
	double i=3.1,*x;
	printf("Value of i=.%2f\n",i);
	x=&i;
	printf("Ori value in x=%d\n",x);
	x++;
	printf("New value in x=%d\n",x);
}
