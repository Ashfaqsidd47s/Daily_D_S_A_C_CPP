#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createNode(int data)
{
   struct node* newNode = (struct node*)malloc(sizeof(struct node));
   newNode->data = data;
   newNode->next = NULL;
   return newNode;
}

void insertAtFirst(struct node** head,int data){//well the pointer of pinter is used for call by reference purpose to show chages in head 
    struct node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct node** headPtr,int data){
    struct node* newNode = createNode(data);
    struct node* current = *headPtr;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
     
}

void deleteAtFirst(struct node** headPtr){
    if(*headPtr == NULL){
        printf("The linkedlist is empty underflow");
        return;
    }
    struct node* current = *headPtr;
    *headPtr = (*headPtr)->next;
}

void deleteAtEnd(struct node** headPtr){
    if(*headPtr == NULL){
        printf("The linkedlist is empty underflow");
        return;
    }

    struct node* current = *headPtr;
    struct node* prev = NULL;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    free(current);
    
}

int main(){
    struct node* head = NULL;
    

    return 0;
}