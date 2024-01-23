#include<stdio.h>
int main()
{
	int sum=0,r,temp,i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		int c=r*r*r;
		sum+=c;
		n=n/10;
	}
	if(sum==temp){
		printf("The given number is a armstrong number: %d",sum);
	}
	else{
		printf("The given number is not a armstrong number: %d",sum);
	}
	return 0;
}
