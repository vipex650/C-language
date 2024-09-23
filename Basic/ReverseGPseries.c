#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(float x=100;x>=n;x=x/2)
    printf("%f ",x);
    return 0;
}