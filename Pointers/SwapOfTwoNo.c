#include<stdio.h>
void swap(int* x,int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a,b;
   
    printf("Enter 1st No.: ");
    scanf("%d",&a);
    printf("Enter 2nd No.: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("1st value becomes %d\n",a);
    printf("2nd value becomes %d",b);
    return 0;
}