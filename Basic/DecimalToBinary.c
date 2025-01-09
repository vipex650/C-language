#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number");
    scanf("%d",&n);

    int i=0,digit;
    int arr[1000];
    while(n!=0){
        digit = n%2;
        arr[i]=digit;
        n=n/2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    return 0;
}