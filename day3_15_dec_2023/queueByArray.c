#include<stdio.h>
#include<stdlib.h>

//QUEUE FOLLOWS FIFO FIRST IN FIRST OUT 

const int max = 100;
int arr[100];
int front = -1;
int rear = -1;

void insert();
void delete();
void display();

int main(){
    int option;

    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: INSERT AN ELEMENT IN QUEUE ");
        printf("\n 2: DELETE AN ELEMENT IN QUEUE");
        printf("\n 3: DISPLAY");
        printf("\n 4: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1 : insert();
            break;
        case 2 : delete();
            break;
        case 3 : display();
            break;
        
        default: printf("\n you have entered a wrong choice \n");
            break;
        }
    } while (option != 4);
    
    return 0;
}

void insert( ){
    int val;

    if(rear == max -1){
        printf("Overflow Error...");
        return ;
    }

    printf("Enter the value that you want to enter in QUEUE :");
    scanf("%d", &val);

    if(front == -1){
        front = 0;
        rear = 0;
        arr[rear] = val;
        return ;
    }
    rear = rear + 1;
    arr[rear] = val;

    return ;
}

void delete( ){
    int i;

    if(front == -1 || front> rear){
        printf("Underflow Error...");
        return ;
    }

    // front = front + 1; THIS IS ONE WAY WITH TIME COMPLEXITY O(0) BUT AS FRONT BECOMES MAX -1 THE ENTIER ARRAY BECOME EMPTY AND ITS REALLY A LOT OF SPACE WASTAGE
    for ( i = front; i < rear; i++)
    {
        arr[i] = arr[i + 1];
    }
    rear = rear -1;
    

    return ;
}

void display(){
    int i;
    for ( i = front; i <= rear; i++)
    {
        if(i == front)
            printf("FRONT===>");
        printf("  %d  ", arr[i]);
        if(i == rear)
            printf("<===REAR");
    }

    return ;
    
}


