#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
} *root;

// struct queue{
//     int val[8];
//     int f,r;
// }que;

struct node* node_insert(struct node* root, int data);
void node_display_preorder(struct node* root);
void node_display_inorder(struct node* root);
void node_display_postorder(struct node* root);
int max_node(struct node* root);
int min_node(struct node* root);
int node_count(struct node* root);
int external_nodes(struct node* root);
int internal_nodes(struct node* root);
// void node_display_levelorder(struct node* root);
// void enqueue(struct node* root);
// int isEmpty();
// struct node* dequeue();

int main(){
    // que.r=-1;    
    // que.f=0;
    int x, min, max, option, ecount=0, icount =0;

    while(1){
        printf("\nSelect option\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Max and Min\n");
        printf("5. Total Number of Nodes\n");
        printf("6. Total Number of Internal and External nodes\n");
        printf("7. Exit\n");
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
                // printf("\nLevelorder Traversal\n");
                // node_display_levelorder(root);
                break;
            case 4:
                min = min_node(root);
                max = max_node(root);
                printf("Minimum number is: %d\n",min);
                printf("Maximum number is: %d\n",max);
                break;
            case 5:
                printf("Total Number of nodes is: %d\n",node_count(root));
                break;
            case 6:
                ecount = external_nodes(root);
                icount = internal_nodes(root);
                printf("Total number of External nodes is: %d\n",ecount);
                printf("Total number of Internal nodes is: %d\n",icount);
                break;
            case 7:
                break;
            default:
                printf("Invalid option\n");
                break;
        }
        if (option==7){
            break;
        }
    }
    return 0;
}

int internal_nodes(struct node* root){
    if(root == NULL || root->left == NULL && root->right == NULL){
        return 0;
    }
    else{
        return (external_nodes(root->left)+ external_nodes(root->right)+1);
    }
}

int internal_nodes(struct node* root){
    if(root==NULL ){

    }
}

int height(struct node* root){
    int leftheight, rightheight;
    if(root == NULL){
        return 0;
    }
    else{
        leftheight = height(root->left);
        rightheight = height(root->right);
        if(leftheight>rightheight){
            return leftheight+1;
        }
        else{
            return rightheight+1;
        }
    }
}

int min_node(struct node* root){
    if(root==NULL || root->left==NULL){
        return root->data;
    }
    else{
        return min_node(root->left);
    }
}

int max_node(struct node* root){
    if(root==NULL || root->right==NULL){
        return root->data;
    }
    else{
        return max_node(root->right);
    }
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

void node_display_postorder(struct node* root){
    if(root!=NULL){
        node_display_postorder(root->left);
        node_display_postorder(root->right);
        printf("%d ",root->data);
    }
}

int node_count(struct node* root){
    if(root == NULL){
        return 0;
    }
    else if(root->left == NULL && root->right == NULL){
        return 1;
    }
    else{
        return (node_count(root->left)+ node_count(root->right)+1);
    }
}

// void enqueue(struct node* root){
//     if (que.r==7){
//         printf("Queve Overloaded!\n");
//     }else{
//         que.val[++que.r]=root;
//     }
// }

// struct node* dequeue(){
//     if (que.r==-1 || que.f>que.r)
//     {
//         printf("Empty Queve\n");
//     }
//     else{
//         struct node* element;
//         if (que.f==que.r){
//             element=que.val[que.f];
//             que.f=0;
//             que.r=-1;
//             return element;
//         }
//         else{
//             element= que.val[que.f];
//             ++que.f;
//             return element;
//         }
//     }
// }

// int isEmpty(){
//     if (que.r==-1 || que.f>que.r)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// void node_display_levelorder(struct node* root){
//     struct node* temp;
//     if(root==NULL){
//         return;
//     }
//     enqueue(root);
//     while(!isEmpty()){
//         temp=dequeue();
//         printf("%d ",temp->data);
//         if(temp->right){
//             enqueue(temp->right);
//         }
//         if(temp->left){
//             enqueue(temp->left);
//         }
//     }
// }