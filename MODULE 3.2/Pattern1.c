#include<stdio.h>
main()
{
    int a,i,j;
    printf("Enter a no :");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }   
        }
        printf("\n");
    }
}