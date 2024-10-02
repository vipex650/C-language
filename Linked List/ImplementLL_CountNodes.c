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

// Function for traversal and Count no. of nodes present in the Linked List
int traverse(){
    struct Node *temp;
    temp=START;
    int count=0;
    while(temp){
        printf("%d\n",temp->data);
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
    CreateNode(10);
    CreateNode(20);
    CreateNode(30);
    CreateNode(40);
    CreateNode(50);

    int n= traverse();
    printf("No. of nodes in the linked list is: %d \n",n);
    return 0;
}