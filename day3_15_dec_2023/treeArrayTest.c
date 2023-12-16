#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Function prototypes
void insertElement(int value, int tree[], int index, int size);
void preOrderTraversal(int index, int tree[], int size);
void inOrderTraversal(int index, int tree[], int size);
void postOrderTraversal(int index, int tree[], int size);
void levelOrderTraversal(int tree[], int size);

int main() {
    int tree[MAX_SIZE];
    int size = 0; // Current size of the tree

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
                insertElement(value, tree, 0, MAX_SIZE);
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

    return 0;
}

// Function to insert an element into the binary tree
void insertElement(int value, int tree[], int index, int size) {
    if (index < size) {
        if (tree[index] == -1) {
            tree[index] = value;
            printf("Element %d inserted at index %d.\n", value, index);
        } else {
            printf("Index %d is already occupied. Cannot insert.\n", index);
        }
    } else {
        printf("Tree is full. Cannot insert more elements.\n");
    }
}

// Function for pre-order traversal
void preOrderTraversal(int index, int tree[], int size) {
    if (index < size && tree[index] != -1) {
        printf("%d ", tree[index]);
        preOrderTraversal(2 * index + 1, tree, size); // Left subtree
        preOrderTraversal(2 * index + 2, tree, size); // Right subtree
    }
}

// Function for in-order traversal
void inOrderTraversal(int index, int tree[], int size) {
    if (index < size && tree[index] != -1) {
        inOrderTraversal(2 * index + 1, tree, size); // Left subtree
        printf("%d ", tree[index]);
        inOrderTraversal(2 * index + 2, tree, size); // Right subtree
    }
}

// Function for post-order traversal
void postOrderTraversal(int index, int tree[], int size) {
    if (index < size && tree[index] != -1) {
        postOrderTraversal(2 * index + 1, tree, size); // Left subtree
        postOrderTraversal(2 * index + 2, tree, size); // Right subtree
        printf("%d ", tree[index]);
    }
}

// Function for level-order traversal (using a queue)
void levelOrderTraversal(int tree[], int size) {
    if (size == 0) {
        printf("Tree is empty.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        if (tree[i] != -1) {
            printf("%d ", tree[i]);
        }
    }
}
