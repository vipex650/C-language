#include<stdio.h>
int main()
{
    int a;
    printf("Enter a no. which you want the table ");
    scanf("%d",&a);
    for(int x=1;x<=10;x++)
    {
        int c= x*a;
    printf("%d\n",c);
    }
    return 0;
}