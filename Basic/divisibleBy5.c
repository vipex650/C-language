#include <stdio.h>
int main()
{
    int x;
    printf("print a no.");
    scanf("%d",&x);
    if(x%5==0)
    printf("divisible by 5");
    else
    printf("not divisible by 5");
    return 0;
    }