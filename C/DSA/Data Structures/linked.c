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
void insert_at_end();
int count, i;
void reverse_print(struct linked *b);
void delete_ith_element(struct linked *h);

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
        printf("7. Insert at End\n");
        printf("8. Delete ith Element From Last\n");
        printf("9. Display Reverse\n");
        printf("10. Exit\n");
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
        case 7:
            insert_at_end();
            break;
        case 8:
            printf("\nDelete ith elemnent\n");
            printf("Enter the value of i: ");
            scanf("%d",&i);
            count=0;
            delete_ith_element(head);
            break;
        case 9:
            reverse_print(head);
            break;
        case 10:
            break;
        default:
            printf("\nInvalid choice\n");
            break;
        }
        if (choice == 10){
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
    if(head==NULL)
    {
        printf("List is empty!\n");
    }
    else{
        struct linked *m;
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
    if (head==NULL)
    {
        printf("List is empty\n");
    }
    else{
        struct linked *a,*b;
        a=head;
        if(a->add==NULL){
            free(a);
            head=NULL;
        }
        else{
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
}

void delete_element_first(){
    if (head==NULL)
    {
        printf("List is empty\n");
    }
    else{
        struct linked *m;
        m=head;
        head=m->add;
        free(m);
    }
}


void insert_at_end(){
    if (head==NULL){
        printf("List is Empty cannot insert value at end of list \n");
    }
    else{
        int data;
        printf("Enter the elemnt to be inserted: ");
        scanf("%d",&data);
        struct linked *ptr, *temp;
        temp=(struct linked*)malloc(sizeof(struct linked));
        temp->val = data;
        temp->add = NULL;
        ptr = head;
        while(ptr->add !=NULL){ 
            ptr = ptr->add;    
        }
        ptr->add = temp; 
    }
}

void count_node(){
    if(head==NULL){
        printf("List is empty\n");
    }
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

void reverse_print(struct linked *b){
    if(b->add!=NULL){
        reverse_print(b->add);
    }
    printf("%d ", b->val);
}

void delete_ith_element(struct linked *h){
    if(h->add!=NULL){
        h=h->add;
        delete_ith_element(h);
        count++;
        if(count==(i+1)){
            struct linked *a,*b;
            a=h;
            b=h->add;
            a->add=b->add;
            free(b);
        }
    }
}