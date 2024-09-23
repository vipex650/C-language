#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    int* x=&a;
    int* y=&b;
    int z=*x + *y;
    printf("%d",z);
    return 0;
}