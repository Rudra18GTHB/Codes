#include <stdio.h>
#include <stdlib.h>
//queue using node list
struct node{
   int val;
   struct node *add;
}*head,*tail;

void clearqueue();
void enqueue();
void delqueue();
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
            clearqueue();
            break;
         case 2:
            enqueue();
            break;
         case 3:
            delqueue();
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

void clearqueue(){
   head=tail=NULL;
   printf("Queue is now Empty!\n");
}

void enqueue(){
   struct node *k,*m;
   int x;
   printf("Enter element:");
   scanf("%d",&x);
   k=(struct node*)malloc(sizeof(struct node));
   k->val=x;
   k->add=NULL;
   if (head==NULL){
      head=tail=k;
   }
   else{
      m=head;
      while(m->add!=NULL){
         m=m->add;
      }
      m->add=k;
      tail=k;
   }
}

void delqueue(){
   if (head==NULL){
      printf("Queue is Empty!\n");
   }
   else{
      if(head==tail){
         head=tail=NULL;
      }
      else{
         struct node *m;
         m=head;
         head=m->add;
         free(m);
      }
   }
}

void display(){
   struct node *m;
   if(head==NULL)
   {
      printf("Queue is empty!\n");
   }
   else{
      m=head;
      while(m->add!=tail->add)
      {
         printf("%d ",m->val);
         m=m->add;
      }
      printf("%d \n",m->val);
   }
}