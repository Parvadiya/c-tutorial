#include<stdio.h>
main()
{
    float radius,area,tr;
    int base,height,width,re;
    printf("Enter value of radius :");
    scanf("%f",&radius);

    printf("Enter value of width :");
    scanf("%d",&width);

    printf("Enter value of height :");
    scanf("%d",&height);
    
    printf("Enter value of base :");
    scanf("%d",&base);

    area=radius*radius*3.14;
    re=width*height;
    tr=0.5*base*height;
    printf("area of circle:%f", area);
    printf("\nArea of rectangle:%d", re);
    printf("\nArea of tringle:%f", tr);
}