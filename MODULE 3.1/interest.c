#include<stdio.h>
main()
{
    int i,j,k,l;
    printf("Enter amount : ");
    scanf("%d",&i);

    printf("interest rate : ");
    scanf("%d",&j);

    k=(i*j)/100;
    l=i+k;
    printf("total = %d",l);
}