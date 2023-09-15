#include<stdio.h>
main()
{
    int a,b,c,d,e,f,g;
    printf("Enter first value :");
    scanf("%d", &a);

    printf("Enter second value :");
    scanf("%d", &b);

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("Addition is: %d\n",c);
    printf("Subtraction is: %d\n",d);
    printf("Multiplication is: %d\n",e);
    printf("Division is: %d\n",f);
    printf("Modules is: %d\n",g);
    getch();
}