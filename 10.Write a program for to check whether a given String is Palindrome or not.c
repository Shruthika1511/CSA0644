#include <string.h>
int main()
{
     char s1[1000],s2[1000];  
   
    printf("Enter  the string: ");
    scanf("%s",&s1);
    strcpy(s2,s1);
    strrev(s2);
    if(!strcmp(s1,s2))
 	    printf("%s string is palindrome",s1);
    else
        printf("%s string is not palindrome",s1);
    
    return 0;
    
    
}
