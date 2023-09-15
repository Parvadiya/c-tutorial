#include<stdio.h>
main()
{
    int m,n,sum=0;
    printf("Enter a no :");
    scanf("%d" ,&n);

    while(n>0)    
    {    
    m=n%10;    
    sum=sum+m;    
    n=n/10;    
    }    
    printf("Sum is=%d",sum);  
}