#include <stdio.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
} *root;

void main(){
    int option;
    while(1){
        printf("Select option\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d",&option);
        switch (option){
            case 1:
                node_insert();
                break;
            case 2:
                node_remove();
                break;
            case 3:
                node_display();
                break;
            case 4:
                break;
            default:
                printf("Invalid option\n");
                break;
        }
        if (option==4){
            break;
        }
    }
}