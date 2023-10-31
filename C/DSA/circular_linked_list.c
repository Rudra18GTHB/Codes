#include<stdio.h>
#include<stdlib.h>

struct linked{
    int val;
    struct linked *add;
}*head;

void list_insert(int x);
void display_list();
void delete_element();

void main()
{
    int choice,x;
    head=NULL;
    while(1){
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("3.Delete\n");
        printf("8. Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be inserted: ");
            scanf("%d",&x);
            list_insert(x);
            break;
        case 2:
            display_list();
            break;
        case 3:
            delete_element();
            break;
        case 8:
            break;
        default:
            printf("\nInvalid choice\n");
            break;
        }
        if (choice == 8){
            break;
        }
    }
}

void list_insert(int x){
    struct linked *k,*m;
    k=(struct linked*)malloc(sizeof(struct linked));
    k->val=x;
    k->add=NULL;
    if (head==NULL){
        head=k;
        k->add=head;
    }
    else{
        k->add=head;
        m=head;
        while(m->add!=head){
            m=m->add;
        }
        m->add=k;
    }
}

void display_list(){
    struct linked *m;
    if(head==NULL)
    {
        printf("List is empty!\n");
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

void delete_element(){
    struct linked *a,*b;
    if (head==NULL)
    {
        printf("List is empty\n");
    }
    else{
        a=head;
        b=head->add;
        while (b->add!=head)
        {
            a=b;
            b=b->add;
        }
        a->add=head;
        free(b);
    }
}