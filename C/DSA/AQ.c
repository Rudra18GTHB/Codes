#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data[9];
    int f, r;
};

struct stack{
    int data[4];
    int h;
};

void enqueue(int x,struct queue* que);
int dequeue(struct queue* que);
int isEmpty(struct stack* stk);
int pop(struct stack* stk);
void push(int x,struct stack* stk);
void display(struct queue* que);

int main()
{
    struct queue *que = (struct queue *)malloc(sizeof(struct queue));
    struct queue *que2 = (struct queue *)malloc(sizeof(struct queue));
    struct stack *stk = (struct stack *)malloc(sizeof(struct stack));
    que->f=0;
    que->r=-1;
    que2->f=0;
    que2->r=-1;
    stk->h=-1;
    for(int i=1; i<=9; i++){
        enqueue(i*10,que);
    }
    display(que);
    int k=4;
    for (int j = 0; j < k; j++)
    {
        push(dequeue(que),stk);
    }
    while(!isEmpty(stk)){
        enqueue(pop(stk),que2);
    }
    for(int l=k; l<9; l++){
        enqueue(dequeue(que),que2);
    }
    
    display(que2);
    return 0;
}

void enqueue(int x,struct queue* que){
    if(que->r==8){
        printf("Queue is Full\n");
    }
    else{
        que->data[++que->r]=x;
    }
}

int isEmpty(struct stack* stk){
    if(stk->h==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int dequeue(struct queue* que){
    if(que->r==-1 || que->f>que->r){
        printf("Queue is Empty\n");
    }
    else{
        if(que->f==que->r){
            que->f=0;
            que->r=-1;
        }
        else{
            return que->data[que->f++];
        }
    }
}

int pop(struct stack* stk){
    if(stk->h==-1){
        printf("Stack is Empty\n");
    }
    else{
        return stk->data[stk->h--];
    }
}

void push(int y,struct stack* stk){
    if(stk->h==3){
        printf("Stack is Full\n");
    }
    else{
        stk->data[++stk->h]=y;
    }
}

void display(struct queue* que){
    if (que->r==-1 || que->f>que->r){
        printf("Queue is Empty");
    }
    else{
        printf("Elements on queue are: ");
        for(int m=que->f;m<=que->r;m++){
            printf("%d ",que->data[m]);
        }
    }
}