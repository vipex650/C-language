#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no. ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping your no. becomes %d and %d",a,b);
    return 0;
}