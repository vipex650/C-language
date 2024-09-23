#include<stdlib.h>
#include<stdio.h>

// Define a structure for a node
struct doubly
{
    struct doubly *pre;
    int data;
    struct doubly *next;
} *START = NULL,*LAST = NULL; // Global pointers

// Function to create node for doubly linked list
void CreateNode(int x)
{
    struct doubly *temp;
    temp = (struct doubly*)malloc(sizeof(struct doubly));
    if(START==NULL){
        temp->data=x;
        temp->pre=NULL;
        temp->next=NULL;
        START=temp;
        LAST=temp;
    }
    else{
        temp->data=x;
        temp->pre=LAST;
        temp->next=NULL;
        LAST->next=temp;
        LAST=temp;
    }
}

// Function to count no. of nodes present in the doubly Linked List
int display(){
    struct doubly *temp;
    temp = START;
    int count=0;
    while(temp!= NULL){
        count++;
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    return count;
}

// Function to insert a node at the beginning of the doubly linked list
void insert_at_begin(int key)
{
    struct doubly *temp;
    temp = (struct doubly*)malloc(sizeof(struct doubly));
    temp->data=key;
    temp->pre=NULL;
    temp->next=START;
    START=temp;
    display();
}

//Function to insert a node at the end of the doubly linked list
void insert_at_end(int key)
{
    struct doubly *temp;
    temp = (struct doubly*)malloc(sizeof(struct doubly));
    temp->data=key;
    temp->pre=LAST;
    temp->next=NULL;
    LAST->next=temp;
    LAST=temp;
    display();
}

// Function to insert a node at a random position of the doubly linked list
void insert_at_random(int y,int key)
{
    struct doubly *temp,*x;
    x = START;
    temp = (struct doubly*)malloc(sizeof(struct doubly));
    int count=0;
    while(x!= NULL){
        count++;
        if(count==y){
            temp->data=key;
            temp->pre=x->next->pre;
            temp->next=x->next;
            x->next=temp;
            break;
        }
        x = x->next;
    }
    display();
}

// Function to delete a node present at the beginning of the doubly linked list
void delete_at_begin()
{
    if (START==NULL)
    return ;
    struct doubly *temp;
    temp =START;
    START=START->next;
    free(temp);
    display();
}

//Function to delete a node present at the end of the doubly linked list
void delete_at_end()
{
    if (START==NULL)
    return ;

    struct doubly *temp;
    temp = LAST;
    LAST = temp->pre;
    LAST->next=NULL;
    free(temp);
    display();
}

//Function to delete a node present at a random position of the doubly linked list
void delete_at_random(int y)
{
    struct doubly *temp;
    temp = START;
    int count=0;
    while(temp!= NULL){
        count++;
        if(count==y){
            temp->pre->next=temp->next;
            temp->next->pre=temp->pre;
            free(temp);
            break;
        }
        temp = temp->next;
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