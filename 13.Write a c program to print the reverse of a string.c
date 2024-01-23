#include<stdio.h>
#include<string.h>
int main()
{
    char str[60];
    int len, i;
    printf("Please insert the string you want to reverse: ");
// fetch the input string from the user
    scanf( "%s", str );
// This will find the length of your string with the help of strlen() function of string.h header file
    len = strlen(str);
// iterate through each and every character of the string for printing it backwards or reverse direction
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);        
    }
    return 0;
}


