#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Enter a value of a :");
    scanf("%d",&a);

    printf("Enter a value of b :");
    scanf("%d",&b);

    printf("Enter a value of c :");
    scanf("%d",&c);

    printf("Enter a value of d :");
    scanf("%d",&d);

    if (a>b && a>c && a>d)
    {
        printf("max no.%d",a);
    }
    else if (b>c && b>d)
    {
        printf("max no.%d",b);
    }
    else if (c>d)
    {
        printf("max no.%d",c);
    }
    else
    {
        printf("max no.%d",d);
    }
}