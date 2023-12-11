#include<stdio.h>
#include<conio.h>


void insert(int *arr, int *n){
    printf("\nEnter the Size of Array :\n");
    scanf("%d", &*n);
    int i;
    for(i = 0 ; i < *n ; i++){
        printf("\nEnter the value at arr[%d]:", i);
        scanf("%d",&arr[i]);
    }
}

int delete(int *arr, int *n){
    int k,i;
    printf("Enter the position at which you want to delte the element :");
    scanf("%d", &k);

    for(i = k; i< *n-1; i++){
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    *n = *n -1 ;
}

int main()
{
    int arr[100];
    int n;
    char ch;
    do
    {
        printf("\n\n\n *** Select an Option form the menue *** \n\n\n");
        printf(" *** 1: Enter the Array  *** \n");
        printf(" *** 2: Display the Array  *** \n");
        printf(" *** 3: Delete an Element from the Array  *** \n");
        printf(" *** 4: Reverse the Array *** \n");

        scanf("%c",&ch);

        switch (ch)
        {
        case  '1':{
                insert(arr, &n);
            }
            break;
        case  '2':{
                delete(arr, &n);
            }
            break;
        
        default:
            break;
        }
    } while (ch != 'n' && ch != 'N');
    
    return 0;
}