#include <stdio.h>
int main()
{
    int n=123995,a=0;
    for(int x=1;n!=0;x++)
    { 
    n=n/10;
    a++;
    }
    printf("%d",a);
    return 0;
}