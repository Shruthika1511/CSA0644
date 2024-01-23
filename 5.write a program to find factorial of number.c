#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		fact *=i;
	}
	printf("The factorial of the given number is: %d",fact);
	return 0;
}
