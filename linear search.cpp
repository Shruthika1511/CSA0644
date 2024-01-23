#include<stdio.h>
int main(){
	int array[100],search,c,n;
	printf("enter the num of elements:");
	scanf("%d",&n);
	printf("enter integers:");
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);
	printf("enter a num to search:");
	scanf("%d",&search);
	for(c=0;c<n;c++)
	{
		if(array[c]==search){
		
		printf("%d is present at location %d", search, c+1);
		break;
	}
	}
	if(c==n)
	printf("%d isn't present in the array",search);
	return 0;
		}
