
#include <stdio.h>
struct queve{
    int val[5];
    int f,r;
}que;

void display();
void enqueve();
void delqueve();
void clearqueve();
void choice();

int main(){
    que.r=-1;    
    que.f=0;
    choice();
    display();
}

void choice(){
    int option;
    printf("\nSelect option!\n");
    printf("1 Empty\n");
    printf("2 Enter Element\n");
    printf("3 Delete Element\n");
    printf("4 Display\n");
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
        break;

    default:
        printf("Invalid option!\n");
        choice();
        break;
    }
}
void enqueve(){
    int x;
    if (que.r>4){
        printf("Queve Overloaded!\n");
    }else{
        printf("Enter element\n==> ");
        scanf("%d",&x);
        que.val[que.r++]=x;
    }
    choice();
}
void clearqueve(){
    que.r=-1;
    que.f=0;
    printf("Queve is Empty!\n");
    choice();
}
void delqueve(){
    if (que.r==0)
    {
        printf("Empty Queve\n");
    }else{
        ++que.f;
    }
    choice();
}
void display(){
    if (que.r==0){
        printf("Queue is Empty");
    }
    else{
        printf("Elements on queue are: ");
        for(int i=0;i<que.r;i++){
            printf("%d ",que.val[i]);
        }
    }
}