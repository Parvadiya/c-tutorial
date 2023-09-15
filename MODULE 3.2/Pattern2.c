#include<stdio.h>
main()
{
    char a,i,j,k='A';
    
    printf("Enter a char :");
    scanf("%c" ,&a);

    i='A';
    while (i<=a)
    {
        j='A';
        while (j<=i)
        {
            printf("%c",k++);
            j++;
        }
        printf("\n");
        i++;
    }
}