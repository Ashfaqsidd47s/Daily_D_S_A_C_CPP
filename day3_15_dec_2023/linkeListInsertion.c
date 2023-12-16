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
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_after(struct node *);
struct node *insert_before(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_before(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);


int main(){
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Add a node after a given node");
        printf("\n 6: Add a node before a given node");
        printf("\n 7: Delete a node from the beginning");
        printf("\n 8: Delete a node from the end");
        printf("\n 9: Delete a given node");
        printf("\n 10: Delete a node after a given node");
        printf("\n 11: Delete a node before a given node");
        printf("\n 12: Delete the entire list");
        printf("\n 13: Sort the list");
        printf("\n 14: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
        case 1: start = create_ll(start);
        printf("\n LINKED LIST CREATED");
        break;
        case 2: start = display(start);
        break;
        case 3: start = insert_beg(start);
        break;
        case 4: start = insert_end(start);
        break;
        case 5: start = insert_after(start);
        break;
        case 6: start = insert_before(start);
        break;
        case 7: start = delete_beg(start);
        break;
        case 8: start = delete_end(start);
        break;
        case 9: start = delete_node(start);
        break;
        case 10: start = delete_before(start);
        break;
        case 11: start = delete_after(start);
        break;
        case 12: start = delete_list(start);
        break;
        default: printf("Enter a valid option \n");
        break;
        }
    }while(option !=13);
    getch();
    return 0;
}

//CREAE A LINKED LIST 
struct node *create_ll(struct node *start){
    int check =0;
    struct node *new_node,*ptr;

    while (check != -1)
    {
        printf("\n Enter the value \n");
        printf("\n Enter -1 for EXIT==> \n");
        scanf("%d", &check);

        if(check == -1){
            return start;
        }
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = check;
        if(start == NULL){
            new_node->next = NULL;  
            start =  new_node;
        } else {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            new_node->next = NULL;  
            ptr->next = new_node;
        }
    } 
    
    return start;
}

//Function to display the linked list 
struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;

    while (ptr != NULL){
        printf("%d ===>",ptr->data);
        ptr = ptr->next;
    }
    
    return start;
}

//INSERT AT THE BEGINING OF THE LINKED LIST 
struct node *insert_beg(struct node *start){
    int val;
    struct node *new_node;

    printf("\n  Enter the data that you want to insert :");
    scanf("%d",&val);
    new_node = (struct node*)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("***OVERFLOW ERROR***");
        return start;
    }

    new_node->data = val;
    new_node->next = start;
    start = new_node;

    return start;
    
}

//INSERTION AT THE END
struct node *insert_end(struct node *start){
    int val;
    struct node *new_node,*ptr;

    printf("\n  Enter the data that you want to insert :");
    scanf("%d",&val);
    new_node = (struct node *)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("OVERFLOW ERROR \n");
        return start;
    }
    new_node->data = val;
    new_node->next = NULL;
    if(start == NULL){
        start = new_node;
        return start;
    }

    ptr = start;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;

    return start;
    
}

//INSRTION AFTER A SPECIFIC NODE 
struct node *insert_after(struct node *start){
    int val, num;
    struct node *new_node, *ptr, *preptr;

    printf("\n  Enter the data that you want to insert :");
    scanf("%d",&val);
    printf("\n  Enter the value after which node you want to inet data :");
    scanf("%d",&num);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    
    if (start == NULL)
    {
        new_node->next = NULL;
        start = new_node;

        return start;
    }
    
    ptr = start;
    preptr = ptr;

    while (preptr->data != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    

    return start;
    
}


//INSRTION BEFORE A SPECIFIC NODE 
struct node *insert_before(struct node *start){
    int val, num;
    struct node *new_node, *ptr, *preptr;

    printf("\n  Enter the data that you want to insert :");
    scanf("%d",&val);
    printf("\n  Enter the value before which node you want to inet data :");
    scanf("%d",&num);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    
    if (start == NULL)
    {
        new_node->next = NULL;
        start = new_node;

        return start;
    }
    
    ptr = start;
    preptr = ptr;

    while (ptr->data != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    

    return start;
    
}

//DELETE FROM THE BEGINING
struct node *delete_beg(struct node *start){
    struct node *ptr;
    
    if(start == NULL){
        printf(" \n OOPS ! There is no element in Liked List for deletion \n");
        return start;
    }

    ptr = start;
    start = start->next;
    free(ptr);

    return start;

}

//DELETE FROM THE END
struct node *delete_end(struct node *start){
    struct node *ptr, *preptr;

    if(start == NULL){
        printf("The Linked List is already Enpty");
        return start;
    }

    ptr = start;
    preptr = ptr;

    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);

    return start;

}

//DELETE A SPECIFIC NODE
struct node *delete_node(struct node *start){
    struct node *ptr, *preptr;
    int num;

    printf("\n Enter the value of node which you want to delete :");
    scanf("%d",&num);

    if(start == NULL){
        printf("The Linked List is already Enpty");
        return start;
    }

    ptr = start;
    preptr = ptr;

    while (ptr->data != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);

    return start;

}


//DELETE AFTER A SPECIFIC NODE 
struct node *delete_after(struct node *start){
    struct node *ptr, *preptr;
    int num;

    printf("\n Enter the value after which you want to delete the node :");
    scanf("%d",&num);

    if(start == NULL){
        printf("The Linked List is already Enpty");
        return start;
    }

    ptr = start;
    preptr = ptr;

    while (preptr->data != num )
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);

    return start;

}

//DELETE BEFORE A SPECIFIC NODE 
struct node *delete_before(struct node *start){
    struct node *ptr, *preptr, *nextptr;
    int num;

    printf("\n Enter the value before which you want to delete the node :");
    scanf("%d",&num);

    if(start == NULL){
        printf("The Linked List is already Enpty");
        return start;
    }

    ptr = start;
    preptr = ptr;
    nextptr = ptr;

    while (nextptr->data != num)
    {
        preptr = ptr;
        ptr = ptr->next;
        nextptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);

    return start;

}

//DELTE ENTIRE LIST 
struct node *delete_list(struct node *start){
    struct node *ptr;

    ptr = start;
    if(start == NULL){
        printf("Link list is already enmpty \n");
        return start;
    }

    ptr = start;
    while (ptr != NULL)
    {
        start = start->next;
        free(ptr);
        ptr = start;
    }

    return start;
}

//SORTING IN LINKED LIST STILL WORKING ON IT 
struct node *sort_list(struct node *start){
    struct node *ptr, *preptr;
    int temp;

    ptr = start;
    preptr = ptr;
    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;

        if(ptr->data > preptr->data){
            temp = ptr->data;
            ptr->data = preptr->data;
            preptr->data = temp;
        }
    }
    
}






