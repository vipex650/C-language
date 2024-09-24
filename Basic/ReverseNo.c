#include<stdio.h>
int main(){
    int x=1234,y=0,a;
    while(x!=0){
        a=x%10;
        y=y*10+a;
        x=x/10;
    }
    printf("%d",y);
    return 0;
}