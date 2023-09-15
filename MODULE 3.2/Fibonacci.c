#include<stdio.h>
main()
{
    int a,i,n1=0,n2=1,n3;
    printf("Enter a no :");
    scanf("%d" ,&a);
    printf("%d %d",n1,n2); 

    for ( i = 0; i < a; ++i)
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}