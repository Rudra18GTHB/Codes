#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *right;
	struct node *left;
};

struct node *tree=NULL;
void create_tree(struct node *tree){
	tree=NULL;
	
}
struct node *insert(struct node *tree,int val)
{
	struct node *ptr,*nodeptr,*parentptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	if(tree==NULL){
		tree=ptr;
		tree->left=NULL;
		tree->right=NULL;
	}
	else{
		parentptr=NULL;
		nodeptr=tree;
		while(nodeptr!=NULL){
			parentptr=nodeptr;
			if(val<nodeptr->data)
				nodeptr=nodeptr->left;
			else
				nodeptr=nodeptr->right;
		}
		if(val<parentptr->data)
			parentptr->left=ptr;
		else
			parentptr->right=ptr;
	}
	return tree;
}
void inorder(struct node *tree)
{
	if(tree!=NULL){
		inorder(tree->left);
		printf("%d\t",tree->data);
		inorder(tree->right);
		}
}
void preorder(struct node *tree){
	if(tree!=NULL){
		printf("%d\t",tree->data);
		preorder(tree->left);
		preorder(tree->right);
	
	}
}
void postorder(struct node *tree){
	if(tree!=NULL){
		postorder(tree->left);
		postorder(tree->right);
		printf("%d\t",tree->data);
	}
}
struct node *findlargest(struct node *tree){
	if(tree==NULL||tree->right==NULL)
		return tree;
	else
		return findlargest(tree->right);
}
struct node *findsmallest(struct node *tree){
	if(tree==NULL||tree->left==NULL){
			return tree;
	}
	else{
		return findsmallest(tree->left);
	}
}
int total_node(struct node *tree){
	if(tree==NULL)
		return 0;
	else{
		return(total_node(tree->left)+total_node(tree->right)+1);
	}
}
int totalexternalnodes(struct node *tree){
	if(tree==NULL){
		return 0;
	}
	else if(tree->left==NULL && tree->right==NULL){
		return 1;
	}
	else{
		return (totalexternalnodes(tree->left)+totalexternalnodes(tree->right));
	}
	
}
int totalinternalnodes(struct node *tree){
	if(tree==NULL||(tree->left==NULL&&tree->right==NULL)){
		return 0;
		
	}
	else{
		return(totalinternalnodes(tree->left)+totalinternalnodes(tree->right)+1);
	}
}
int height(struct node *tree){
	int leftheight,rightheight;
	if(tree==NULL)
		return 0;
	else{
		leftheight=height(tree->left);
		rightheight=height(tree->right);
		if(leftheight>rightheight)
			return (leftheight+1);
		else{
			return (rightheight+1);
		}
	}	
}

int main(){
	struct node *ptr;
	int option,val;
	create_tree(tree);
	do
	{
		printf("\nMain Menu");
		printf("\n1.insert");
		printf("\n2.inorder");
		printf("\n3.preorder");
		printf("\n4.postorder");
		printf("\n5.large");
		printf("\n6.small");
		printf("\n7.total elements:");
		printf("\n8.external elements:");		
		printf("\n9.internal elements:");
		printf("\n10.height");
		printf("\n11.exit");
		printf("\nenter choice");
		scanf("%d",&option);
		switch(option)
		{
		
		case 1:printf("enter value:");
			scanf("%d",&val);
			tree=insert(tree,val);
		case 2:printf("inorder:");
			inorder(tree);
			break;
		case 3:printf("preorder");
			preorder(tree);
			break;
		case 4:printf("postorder");
			postorder(tree);
			break;
		case 5:ptr=findlargest(tree);
			printf("largest is %d",ptr->data);
			break;
		case 6:ptr=findsmallest(tree);
			printf("largest is %d",ptr->data);
			break;
		case 7:printf("total nodes",total_node(tree));
			break;
		case 8:printf("total nodes",totalexternalnodes(tree));
			break;
		case 9:printf("total nodes",totalinternalnodes(tree));
			break;
		case 10:printf("total nodes",height(tree));
			break;	
		}
	}while(option!=11);
	
}