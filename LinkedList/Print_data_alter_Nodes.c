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

// Function to print the data of alternate nodes present in the L.L
void alternateNodes(){
    struct Node *temp;
    temp=START;
    int count=0;
    while(temp){
        if(count%2==0)
        printf("%d\n",temp->data);
        count++;
        temp=temp->next;
    }
    return;
}

int main(){
    CreateNode(10);
    CreateNode(20);
    CreateNode(30);
    CreateNode(100);
    CreateNode(50);
    
    alternateNodes();
    return 0;
}