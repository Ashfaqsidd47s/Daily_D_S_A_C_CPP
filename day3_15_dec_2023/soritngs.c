#include<stdio.h>

int arr[100];
int n;

void insert();
void display();
void bubble_sort();
void selection_sort();
void insertion_sort();

int main(){
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: TAKE INPUT OF ARRAY");
        printf("\n 2: DISPLAY THE ARRAY ");
        printf("\n 3: BUBBLE SORT");
        printf("\n 4: SELECTION SORT");
        printf("\n 5: INSERTION SORT ");
        printf("\n 6: MERGE SORT");
        printf("\n 7: QUICK SORT");
        printf("\n 8: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);

        switch(option)
        {
        case 1: insert();
        break;
        case 2: display();
        break;
        case 3: bubble_sort();
        break;
        case 4: selection_sort();
        break;
        case 5: insertion_sort();
        break;
        case 6: insertion_sort();
        break;
        case 7: insertion_sort();
        break;
        default: printf("Enter a valid option \n");
        break;
        }
    }while(option != 8);
    return 0;
}

//INSERT THE ARRAY
void insert(){
    int i;
    printf("\n Enter the size of Array :");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("\n enter vlaue of arr[%d]", i);
        scanf("%d", &arr[i]);
    }    

}

void display(){
    int i;

    for ( i = 0; i < n; i++)
    {
        printf("  %d  ", arr[i]);
    }
    
}

void bubble_sort(){
    int i,j, temp;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n -1 - i; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    
}

void selection_sort(){
    int i,j, temp;
    int min_index = 0;

    for ( i = 0; i < n; i++)
    {
        min_index = i;
        for ( j = i ; j < n  ; j++)
        {
            if(arr[j ]< arr[min_index]){
                min_index = j ;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        
    }
    
}

void insertion_sort(){
    int i,j;

    for ( i = 0; i < n; i++)
    {
        int current = arr[i];
        j = i - 1;
        while (j>=0 && arr[j]> current)
        {
            arr[j+ 1] = arr[j];
            j--;
        } 
        
        arr[j +  1] = current;   
        
    }
    
}