#include<stdio.h>
#include<math.h>
int main(){

    int n;
    printf("Enter a binay no.");
    scanf("%d",&n);

    int i=0 , digit , sum=0;
    while(n!=0){
        digit = n%10;
        if(digit!=1 && digit!=0){
        printf("Not a Valid Binary Number");
        break;
        }
        if(digit == 1)
        sum = sum + digit*pow(2,i);
        n=n/10;
        i++;
    }
    if(n==0)
    printf("%d",sum);
    return 0;
}