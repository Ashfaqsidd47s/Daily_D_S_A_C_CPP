#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;//pointer to node Structure
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);


int main(){
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Add a node before a given node");
        printf("\n 6: Add a node after a given node");
        printf("\n 7: Delete a node from the beginning");
        printf("\n 8: Delete a node from the end");
        printf("\n 9: Delete a given node");
        printf("\n 10: Delete a node after a given node");
        printf("\n 11: Delete the entire list");
        printf("\n 12: Sort the list");
        printf("\n 13: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
        case 1: start = create_ll(start);
        printf("\n LINKED LIST CREATED");
        break;
        case 2: start = display(start);
        break;
        }
    }while(option !=13);
    getch();
    return 0;
}

struct node *create_ll(struct node *start){
    int check =0;
    struct node *new_node,*ptr;

    do
    {
        printf("\n Enter the value \n");
        printf("\n Enter -1 for EXIT==> \n");
        scanf("%d", &check);

        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = check;
        if(start == NULL){
            start =  new_node;
        } else {
            ptr = start;
            while (ptr->next == NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
    } while (check != -1);
    
    return start;
}

//Function to display the linked list 
struct node *display(struct node *start){
    struct node *ptr = start;

    while (ptr != NULL){
        printf("%d ===>",ptr->data);
        ptr = ptr->next;
    }
    
    return start;
}

