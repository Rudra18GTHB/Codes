#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
} *root;

struct node* node_insert(struct node* root, int data);
void node_display_preorder(struct node* root);
void node_display_inorder(struct node* root);
void node_display_postorder(struct node* root);
void node_display_levelorder(struct node* root);

int main(){
    int x;
    int option;
    while(1){
        printf("\nSelect option\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d",&option);
        switch (option){
            case 1:
                printf("Enter the element:");
                scanf("%d",&x);
                root=node_insert(root,x);
                break;
            case 3:
                printf("Preorder Traversal\n");
                node_display_preorder(root);
                printf("\nInorder Traversal\n");
                node_display_inorder(root);
                printf("\nPostorder Traversal\n");
                node_display_postorder(root);
                printf("\nLevelorder Traversal\n");
                node_display_levelorder(root);
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
    return 0;
}

struct node* node_insert(struct node* root,int data){
    if (root==NULL){
        root= (struct node *)malloc(sizeof(struct node));
        root->data=data;
        root->left=root->right=NULL;
    }
    else{
        if (data< root->data){
            root->left= node_insert(root->left,data);
        }
        else if(data> root->data){
            root->right=node_insert(root->right,data);
        }
    }
    return root;
}

void node_display_preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        node_display_preorder(root->left);
        node_display_preorder(root->right);
    }
}

void node_display_inorder(struct node* root){
    if(root!=NULL){
        node_display_inorder(root->left);
        printf("%d ",root->data);
        node_display_inorder(root->right);
    }
}