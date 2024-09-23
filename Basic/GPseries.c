#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. upto which you want the GP series ");
    scanf("%d",&n);
    for(int x=3;x<=n;x=x*4)
    printf("%d ",x);
    return 0;
}