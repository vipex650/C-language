#include <stdio.h>

void SumOfDigit(int n){
    int sum=0,a=0;
    while(n!=0)
        {
            a=n%10;
            sum=sum+a;
            n=n/10;  
        }
    printf("%d",sum); 
}



int main()
{
    int n=54321;
    SumOfDigit(n);
    return 0;
}