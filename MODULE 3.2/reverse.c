#include<stdio.h>
main()
{
    int n,reverse=0, remainder;
    printf("Enter a no :");
    scanf("%d" ,&n);

    while (n != 0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n /= 10;
    }
    printf("Reverse number =%d", reverse);
}