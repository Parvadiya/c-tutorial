#include<stdio.h>
main()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d",&n);

  (n%2) ? 
  printf("%d is odd number",n) : 
  printf("%d is even number",n);
}