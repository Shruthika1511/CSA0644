#include <stdio.h>
#include <string.h>
int main()
{
   char s1[100],s2[100];  
    int i;
 	printf("Enter s1: ");
 	scanf("%s",&s1);
    strcpy(s2,s1);
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
    return 0;
    
}
