#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. upto which you want the AP series ");
    scanf("%d",&n);
    for(int x=4;x<=n;x+=3)
        printf("%d ",x);
    return 0;
}