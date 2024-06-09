#include <stdio.h>
#include <stdlib.h>

struct dlinked{
    int val;
    struct dlinked *prev,*next;
}*head;

void dlinked_insert();
void dlinked_remove();
void dlinked_display();
void dlinked_reverse();

void main(){
    head=NULL;
    int option;
    while(1){
        printf("Select option\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. reverse\n");
        printf("5. Exit\n");
        scanf("%d",&option);
        switch (option){
            case 1:
                dlinked_insert();
                break;
            case 2:
                dlinked_remove();
                break;
            case 3:
                dlinked_display();
                break;
            case 4:
                dlinked_reverse();
                break;
            case 5:
                break;
            default:
                printf("Invalid option\n");
                break;
        }
        if (option==5){
            break;
        }
    }
}

void dlinked_insert(){
    int x;
    printf("Enter the element:");
    scanf("%d",&x);
    struct dlinked *k,*m;
    k=(struct dlinked*)malloc(sizeof(struct dlinked));
    k->val=x;
    k->prev=k->next=NULL;
    if (head==NULL){
        head=k;
    }
    else{
        m=head;
        while(m->next!=NULL){
            m=m->next;
        }
        m->next=k;
        k->prev=m;
    }
}

void dlinked_remove(){
    if (head==NULL){
        printf("List is empty\n");
    }
    else{
        struct dlinked *m,*k;
        m=head;
        if(m->next==NULL){
            free(m);
            head=NULL;
        }
        else{
            k=head->next;
            while(k->next!=NULL){
                m=k;
                k=k->next;
            }
            m->next=NULL;
            free(k);
        }
    }
}

void dlinked_display(){
    if (head==NULL){
        printf("List is empty\n");
    }
    else{
        struct dlinked *m;
        m=head;
        while(m->next!=NULL){
            printf("%d ",m->val);
            m=m->next;
        }
        printf("%d\n",m->val);
    }
}

void dlinked_reverse(){
    if (head==NULL){
        printf("List is empty\n");
    }
    else{
        struct dlinked *m;
        m=head;
        while(m->next!=NULL){
            m=m->next;
        }
        while(m->prev!=NULL){
            printf("%d ",m->val);
            m=m->prev;
        }
        printf("%d\n",m->val);
    }
}