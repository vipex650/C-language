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

// Function to find given data is present in the L.L
void search(int key){
    struct Node *temp;
    temp=START;
    while(temp){
        if(temp->data==key){
            printf("yes\n");
            return;
        }
        temp=temp->next;
    }
    printf("No\n");
    return;
}

int main(){
    CreateNode(10);
    CreateNode(20);
    CreateNode(30);
    CreateNode(100);
    CreateNode(50);
    
    search(40);
    search(100);
    search(10);
    return 0;
}