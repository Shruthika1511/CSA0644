#include<stdio.h>
int main()
{
	int p,n,i,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
		else{
			continue;
		}
	}
	if(count<=2){
		printf("The given number %d is a prime number.",n);
	}
	else{
		printf("%d is not a prime number.",n);
	}
	return 0;
}
