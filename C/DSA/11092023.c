#include<stdio.h>
#include<stdlib.h>

struct linked{
    int val;
    struct linked *add;

}*head;

void list_insert(int x);
void display_list();
void delete_element_last();
void delete_element_first();
void count_node();
void desired_insert();

void main()
{
    int choice,x;
    head=NULL;
    while(1){
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("3.Delete Last\n");
        printf("4.Delete First\n");
        printf("5.Count Node\n");
        printf("6.Insert in Desired Position\n");
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
            delete_element_last();
            break;
        case 4:
            delete_element_first();
            break;
        case 5:
            count_node();
            break;
        case 6:
            desired_insert();
            break;
        default:
            printf("\nInvalid choice\n");
            break;
        }
    }
}

void list_insert(int x){
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
        while(m->add!=NULL)
        {
            printf("%d ",m->val);
            m=m->add;
        }
        printf("%d \n",m->val);
    }
}

void delete_element_last(){
    struct linked *a,*b;
    if (head==NULL)
    {
        printf("List is empty\n");
    }
    else{
        a=head;
        b=head->add;
        while (b->add!=NULL)
        {
            a=b;
            b=b->add;
        }
        a->add=NULL;
        free(b);
    }
    
}

void delete_element_first(){
    if (head==NULL)
    {
        printf("\nList is empty\n");
    }
    else{
        struct linked *m;
        m=head;
        head=m->add;
        m->add=NULL;
        free(m);
    }
}


void count_node(){
    int count=0;
    struct linked *m;
    m=head;
    while (m->add!=NULL){
        ++count;
        m=m->add;
    }
    printf("Total Number of Nodes: %d \n",count+1);    
}

void desired_insert(){
    int element, position,pos_count=0;
    printf("Enter the element to be inserted\n");
    scanf("%d",&element);
    printf("Enter the position \n");
    scanf("%d",&position);
    struct linked *k,*m;
    k=(struct linked*)malloc(sizeof(struct linked));
    m=head;
    k->val=element;
    while(pos_count!=position){
        m=m->add;
        pos_count++;
    }
    k->add=m->add;
    m->add=k;
    display_list();
}                                                                                                                                                                                                       