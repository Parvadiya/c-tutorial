#include<stdio.h>
main()
{
    char a,i,j;
    
    printf("Enter a char :");
    scanf("%c" ,&a);

    i='A';
    while (i<=a)
    {
        j='A';
        while (j<=i)
        {
            printf("%c",j);
            ++j;
        }
        printf("\n");
        ++i;
    }
}