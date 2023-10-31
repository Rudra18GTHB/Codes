#include <stdio.h>
struct stack{
    int A[5];
    int h;
} stk;
void chooice();
void push();
void pop();
void display();

void main()
{
    stk.h=-1;
    chooice();
    display();
}

void push(){
    if(stk.h==4){
        printf("Stack is Full");
    }
    else{
        int x;
        printf("Enter the value to be inserted in stack: ");
        scanf("%d",&x);
        stk.A[++stk.h]=x;
    }
    chooice();
}

void pop(){
    if(stk.h==-1){
        printf("Stack is Empty\n");
    }
    else{
        --stk.h;
    }
    chooice();
}

void chooice(){
    int choice;
    printf("Stack operation to perform: \n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            break;
        default:
            printf("Invalid Input\n");
            chooice();
    }
}

void display(){
    if (stk.h==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Elements on stack are: ");
        for(int i=0;i<=stk.h;i++){
            printf("%d ",stk.A[i]);
        }
    }
}