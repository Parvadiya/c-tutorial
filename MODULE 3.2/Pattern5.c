#include<stdio.h>
main()
{
    int a,i,j,number=1;
    printf("Enter a no :");
    scanf("%d" , &a);
  
    for (i = 1; i <= a; i++)  
    {  
        for (j = 1; j <= i; ++j)  
        {  
            printf( "%d\t",number);  
            ++number;
        }  
        printf("\n");  
    }  
}