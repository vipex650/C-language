#include <stdio.h>
int main()
{
    int x;
    printf("Print a no.");
    scanf("%d",&x);
    if (x%2==0){
    printf("no. is even");
    }
    else
    {
        printf("no. is odd");
    }
    return 0;
}