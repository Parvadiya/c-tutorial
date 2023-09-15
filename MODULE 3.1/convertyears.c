#include<stdio.h>
main()
{
    int a,b,year,days;
    printf("Enter a days :");
    scanf("%d", &a);

    year=a/365;
    printf("year :\n%d\n", year);

    printf("Enter a year :");
    scanf("%d",&b);

    days=b*365;
    printf("days :\n%d",days);
}