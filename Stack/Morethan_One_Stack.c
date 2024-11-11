#include<stdio.h>
#define SIZE 10
 
struct Stack {
    int array[SIZE];
    int TOP;
};

void Push(struct Stack *PS , int x){
    if(PS->TOP == SIZE-1) return;  // Overflow
    // it used to access structure members through a pointer to the structure. (->)
    PS->TOP=PS->TOP +1;
    PS->array[PS->TOP]=x;
}

int Pop(struct Stack *PS){
    if(PS->TOP ==  -1)   return -1;  // Underflow (Stack is empty)
    int temp = PS->array[PS->TOP];
    PS->TOP=PS->TOP -1;
    return temp;
}

int main(){

    struct Stack s1,s2,s3;
    s1.TOP=-1;
    // it is used to access members of structure to variable (.)
    s2.TOP=-1;
    s3.TOP=-1;

    Push(&s1,10);
    Push(&s1,20);
    Push(&s1,30);
    printf("%d\n", Pop(&s1));
    printf("%d\n", Pop(&s1));
    Push(&s1,40);
    Push(&s1,50);
    return 0;
}