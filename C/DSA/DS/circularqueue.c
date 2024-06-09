#include <stdio.h>
#include <stdlib.h>
//queue using linked list
struct linked{
    int val;
    struct linked *add;
}*head,*tail;

void clearqueve();
void enqueve();
void delqueve();
void display();

void main()
{
    head=tail=NULL;
    int option;
    while(1){
        printf("\nSelect option!\n");
        printf("1 Empty\n");
        printf("2 Enter Element\n");
        printf("3 Delete Element\n");
        printf("4 Display\n");
        printf("5 Exit\n");
        scanf("%d",&option);
        switch (option)
        {
            case 1:
                clearqueve();
                break;
            case 2:
                enqueve();
                break;
            case 3:
                delqueve();
                break;
            case 4:
                display();
                break;
            case 5:
                break;
            default:
                printf("Invalid option!\n");
                break;
        }
        if(option==5){
            break;
        }
    }
}

void clearqueve(){
    head=tail=NULL;
    printf("Queve is now Empty!\n");
}

void enqueve(){
    struct linked *k,*m;
    int x;
    printf("Enter element:");
    scanf("%d",&x);
    k=(struct linked*)malloc(sizeof(struct linked));
    k->val=x;
    k->add=NULL;
    if (head==NULL){
        k->add=head=tail=k;
    }
    else{
        m=head;
        while(m->add!=head){
            m=m->add;
        }
        m->add=k;
        k->add=head;
        tail=k;
    }
}

void delqueve(){
    if (head==NULL){
        printf("Queue is Empty!\n");
    }
    else{
        struct linked *m, *n;
        m,n=head;
        while(m->add!=head){
            m=m->add;
        }
        m->add=n->add;
        head=n->add;
        free(n);
    }
}

void display(){
    struct linked *m;
    if(head==NULL)
    {
        printf("Queue is empty!\n");
    }
    else{
        m=head;
        while(m->add!=head)
        {
            printf("%d ",m->val);
            m=m->add;
        }
        printf("%d \n",m->val);
    }
}