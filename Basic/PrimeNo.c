#include <stdio.h>
int main()
{
    printf("Enter a no.");
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
        a=1;
       break;
        }
    }
    if(a==0)
     printf("given no. is prime no.");
     else
      printf("given no. is composite no.");
      return 0;
}