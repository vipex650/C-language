#include<stdio.h>
int main()
{
    printf("Enter a no.");
    float x;
    scanf("%f",&x);
    int y=x;
    x= x-y;
    printf("Fractional Part of the given no. is %f",x);
    return 0;
}