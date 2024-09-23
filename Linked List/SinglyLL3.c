#include<stdlib.h> 
#include<stdio.h>

// Define a structure for a node
struct singly
{
    int data;
    struct singly *next;
} *START = NULL,*LAST = NULL; // Global pointers

// Function to create node
void CreateNode(int x)
{
    struct singly *temp;
    temp = (struct singly*)malloc(sizeof(struct singly));
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

// Function to count no. of nodes present in the Linked List
int display(){
    struct singly *temp;
    temp = START;
    int count=0;
    while(temp!= NULL){
        count++;
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    return count;
}

// Function to insert a node at the beginning
void insert_at_begin(int key)
{
    struct singly *temp;
    temp = (struct singly*)malloc(sizeof(struct singly));
    temp->data=key;
    temp->next=START;
    START=temp;
    display();
}

// Function to insert a node at the end
void insert_at_end(int key)
{
    struct singly *temp;
    temp = (struct singly*)malloc(sizeof(struct singly));
    temp->data=key;
    temp->next=NULL;
    LAST->next=temp;
    LAST=temp;
    display();
}

// Function to insert a node at a random position
void insert_at_random(int y,int key)
{
    struct singly *temp,*x;
    x = START;
    temp = (struct singly*)malloc(sizeof(struct singly));
    int count=0;
    while(x!= NULL){
        count++;
        if(count==y){
            temp->data=key;
            temp->next=x->next;
            x->next=temp;
            break;
        }
        x = x->next;
    }
    display();
}

// Function to delete a node present at the beginning
void delete_at_begin()
{
    if (START==NULL)
    return ;
    struct singly *temp;
    temp =START;
    START=START->next;
    free(temp);
    display();
}

// Function to delete a node present at the end
void delete_at_end()
{
    if (START==NULL)
    return ;

    struct singly *temp;
    temp = START;
    while(temp->next->next!= NULL){
        temp = temp->next;
    }
    temp->next=NULL;
    free(LAST);
    display();
}

// Function to delete a node present at a random position
void delete_at_random(int y)
{
    struct singly *temp,*x;
    x = START;
    int count=0;
    while(x!= NULL){
        count++;
        if(count==y-1){
            temp=x->next;
            x->next=temp->next;
            free(temp);
            break;
        }
        x = x->next;
    }
    display();
}

int main()
{
    CreateNode(10);
    CreateNode(20);
    CreateNode(30);
    CreateNode(40);
    CreateNode(50);

    int n= display();
    printf("No. of nodes in the linked list is: %d \n",n);
    
    printf("Insert a node at the beginning \n");
    insert_at_begin(5);

    printf("Insert a node at the end \n");
    insert_at_end(100);

    printf("Insert a node after 2nd position \n");
    insert_at_random(2,25);

    printf("Delete a node at the beginning \n");
    delete_at_begin();

    printf("Delete a node at the end \n");
    delete_at_end();

    printf("Delete a node at 2nd position \n");
    delete_at_random(2);
    
    return 0;
}