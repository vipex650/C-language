#include<stdio.h>
void number(int n)
{
    if (n<1) return;
    printf("%d\n",n);
    number(n-1); 
     return ;
}
int main()
{
    int n;
    printf("Enter a no. :");
    scanf("%d",&n);
    number(n);
    return 0;
}
