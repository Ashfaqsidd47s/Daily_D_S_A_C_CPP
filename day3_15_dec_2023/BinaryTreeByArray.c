#include<stdio.h>

#define MAX 100

int tree[MAX];
int size = 0;

// Function prototypes
void insertElement( int tree[], int index);
void preOrderTraversal(int index, int tree[], int size);
void inOrderTraversal(int index, int tree[], int size);
void postOrderTraversal(int index, int tree[], int size);
void levelOrderTraversal(int tree[], int size);

int main(){

    while (1) {
        int choice, value;

        printf("\nBinary Tree Menu:\n");
        printf("1. Insert Element\n");
        printf("2. Pre-order Traversal\n");
        printf("3. In-order Traversal\n");
        printf("4. Post-order Traversal\n");
        printf("5. Level-order Traversal\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertElement( tree, 0);
                size++;
                break;

            case 2:
                printf("Pre-order Traversal:\n");
                preOrderTraversal(0, tree, size);
                printf("\n");
                break;

            case 3:
                printf("In-order Traversal:\n");
                inOrderTraversal(0, tree, size);
                printf("\n");
                break;

            case 4:
                printf("Post-order Traversal:\n");
                postOrderTraversal(0, tree, size);
                printf("\n");
                break;

            case 5:
                printf("Level-order Traversal:\n");
                levelOrderTraversal(tree, size);
                printf("\n");
                break;

            case 6:
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
}

//INSERT ELEMENT
void insertElement( int tree[], int index){
    
} 

//PRE_ORDER TRAVERSAL
void preOrderTraversal(int index, int tree[], int size){
    if(index >= size || tree[index] == -1){
        return;
    }
    printf(" [%d] ===> %d",index, tree[index]);
    preOrderTraversal(2*index + 1,tree,size);
    preOrderTraversal(2*index + 2,tree,size);
}