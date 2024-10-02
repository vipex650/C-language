#include<stdio.h>
#include<stdlib.h>

// Define a structure for a node
struct Node{
    int data;
    struct Node *next;
} *START=NULL,*LAST=NULL; //Global Variable

// Function to create node
void CreateNode(int x){
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    if(START==NULL){
        temp->data=x;
        temp->next=NULL;
        START=temp;
        LAST=temp;
    }
    else{
        temp->data=x;
        temp->next=NULL;
        LAST->next=temp;
        LAST=temp;
    }
}

// Function to return data of second last node in L.L
void traverse(){
    struct Node *temp;
    temp=START;
    if(temp==NULL && temp->next==NULL) return;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    printf("Data of second last node in L.L: %d \n",temp->data);
    return;
}

int main(){
    CreateNode(10);
    CreateNode(20);
    CreateNode(30);
    CreateNode(40);
    CreateNode(50);
    
    traverse();
    return 0;
}