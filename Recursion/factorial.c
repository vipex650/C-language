#include<stdio.h>
int fact(int n)
{
    if (n==0) return 1; // base case
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter a no. which you want the factorial value. :");
    scanf("%d",&n);
    int factorial =  fact(n);
    printf("Factorial of given no. is : %d",factorial);
    return 0;
}