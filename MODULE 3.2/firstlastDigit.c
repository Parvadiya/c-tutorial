#include<stdio.h>
main()
{
    int n,lastDigit,firstDigit,sum=0;
    printf("Enter a no :");
    scanf("%d" ,&n);

    lastDigit = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
}