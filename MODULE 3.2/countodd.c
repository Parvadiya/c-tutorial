#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n",i);
            sum++;
        }
    }
    printf("sum of odd number below string is :%d\n",sum);
}