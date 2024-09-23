#include <stdio.h>
int main()
{
    int n=12345,sum=0,a=0;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
        
    }
    printf("%d",sum);
    return 0;
}