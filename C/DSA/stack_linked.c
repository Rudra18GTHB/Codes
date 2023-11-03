#include <stdio.h>
#include<stdlib.h>
//Stack using linked list
struct linked{
    int val;
    struct linked *add;
}*head;

void push();
void pop();
void display();

void main()
{
    head=NULL;
    while(1){
        int choice;
        printf("Stack operation to perform: \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
        if (choice == 4){
            break;
        }
    }
}

void push(){
    int x;
    printf("Enter the value to be inserted in stack: ");
    scanf("%d",&x);
    struct linked *k,*m;
    k=(struct linked*)malloc(sizeof(struct linked));
    k->val=x;
    k->add=NULL;
    if (head==NULL)
        head=k;
    else{
        m=head;
        while(m->add!=NULL){
            m=m->add;
        }
        k->add=m;
        head=k;
    }
}

void pop(){
    
    if (head==NULL){
        printf("List is empty\n");
    }
    else{
        struct linked *a;
        a=head;
        head=a->add;
        free(a);
    }
}


void display(){
    struct linked *m;
    if(head==NULL)
    {
        printf("List is empty!\n");
    }
    else{
        m=head;
        while(m->add!=NULL)
        {
            printf("%d ",m->val);
            m=m->add;
        }
        printf("%d \n",m->val);
    }
}