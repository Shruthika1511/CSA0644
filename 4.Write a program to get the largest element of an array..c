#include<stdio.h>
int main()
{
	int a[100],i,b;
	printf("Enter the size of array:");
	scanf("%d",&b);
	for(i=0;i<b;++i){
		scanf("%d",&a[i]);
	}
	for(i=1;i<b;++i){
		if(a[0]<a[i]){
			a[0]=a[i];
		}
	}
	printf("Largest element : %d",a[0]);
	return 0;
}
