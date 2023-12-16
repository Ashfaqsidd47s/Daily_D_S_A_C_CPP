#include<stdio.h>
#include<stdlib.h>

//STACK FOLLOW LIFO LAST IN FIRST OUT

const int max = 100;
int arr[100];
int top =-1;

int push( int );
int pop( int );
void display( int );

int main(){
    int option;

    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: PUSH ");
        printf("\n 2: POP");
        printf("\n 3: DISPLAY");
        printf("\n 4: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1 : top = push(top);
            break;
        case 2 : top = pop(top);
            break;
        case 3 : display(top);
            break;
        
        default: printf("\n you have entered a wrong choice \n");
            break;
        }
    } while (option != 4);
    


    return 0;
}

//FUNCTION FOR CREATING STACK OR INPUT THE ARRAY
int push( int top){
    int val;
    
    printf("\n Enter the value that you want to insert:");
    scanf("%d",&val);

    if(top == max){
        printf("Overflow error....\n");
        return top;
    }

    top = top + 1;
    arr[top] = val;
    return top;
}

int pop(int top){
    if(top == -1){
        printf("\n Underflow error \n");
        return top;
    }
    top = top -1;
    return top;
}

void display( int top){
    int i;
    for ( i = top; i >= 0; i--)
    {
        printf(" %d ",arr[i]);
        if(i == top){
            printf("<===TOP");
        }
        printf("\n");
    }
    
}