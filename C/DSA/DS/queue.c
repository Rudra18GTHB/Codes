#include <stdio.h>
struct queve{
    int val[5];
    int f,r;
}que;

void display();
void enqueve();
void delqueve();
void clearqueve();

int main(){
    que.r=-1;    
    que.f=0;
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
            return 0;
        }
    }
}

void enqueve(){
    int x;
    if (que.r==4){
        printf("Queve Overloaded!\n");
    }else{
        printf("Enter element:");
        scanf("%d",&x);
        que.val[++que.r]=x;
    }
}

void clearqueve(){
    que.r=-1;
    que.f=0;
    printf("Queve is now Empty!\n");
}

void delqueve(){
    if (que.r==-1 || que.f>que.r)
    {
        printf("Empty Queve\n");
    }else{
        if (que.f==que.r){
            clearqueve();
        }
        else{
            ++que.f;
        }
    }
}

void display(){
    if (que.r==-1){
        printf("Queue is Empty");
    }
    else{
        printf("Elements on queue are: ");
        for(int i=que.f;i<=que.r;i++){
            printf("%d ",que.val[i]);
        }
    }
}