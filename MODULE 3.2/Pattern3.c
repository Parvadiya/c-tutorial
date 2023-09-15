#include<stdio.h>
main()
{
    int i,j,a,k=0;
    printf("Enter a no :");
    scanf("%d" ,&a);

    for (i = 1; i <= a; ++i, k = 0) 
    {
      for (j = 1; j <= a - i; ++j)
        {
            printf("  ");
        }
      while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}