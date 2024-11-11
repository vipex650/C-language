#include<stdio.h>
#define SIZE 10  // define maximum size of the stack
int STACK[SIZE]; // Array to store Stack elements
int TOP = -1;  // Initially Stack is empty

void Push(int x){
    if(TOP == SIZE-1) return;  // Overflow
    TOP++;
    STACK[TOP]=x;
}

int Pop(){
    if(TOP ==  -1)   return -1;  // Underflow (Stack is empty)
    int temp = STACK[TOP];
    TOP--;
    return temp;
}

int main(){
    Push(10);
    Push(20);
    Push(30);
    printf("%d\n", Pop());
    printf("%d\n", Pop());
    Push(40);
    Push(50);
    return 0;
}