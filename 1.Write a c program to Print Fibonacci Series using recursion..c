#include <stdio.h>
 int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}
 int main()
{
  int s, i = 0, j;
 
  printf("Enter the number of terms: ");
  scanf("%d", &s);
 
  printf("The first %d terms of the Fibonacci series are: \n", s);
 
  for (j = 1; j <= s; j++)
  {
    printf("%d\n", fibonacci(i));
    i++;
  }
 return 0;
}

