/* To check is give string is a palindrome*/
/*31-10-2020*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[100];
	int l=0,h=strlen(str)-1;
	printf("\nEnter a string");
	scanf("%c",&str[100]);
	while(h>1)
	{
		if (str[l++]!=str[h--])
		{
			printf("\nNot a palindrome");
			return;
		}
	}
	printf("\nPalindrome");
}
