#include <stdio.h>
int main()
{
    float radius,pi,area;
    printf("ENTER THE RADIUS : ");
    scanf("%f",&radius);
    pi=3.14;
    area=pi*radius*radius;
    printf("Area of circle is: %f",area);
    return 0;
}