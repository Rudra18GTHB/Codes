#include<stdio.h>
int main(){
    int a,b,c, largest=0;
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d,",&b);
    printf("the value of c is ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("a is largest no \n");
            largest=a;
        }
    }
    if (b>c){
        if(b>a){
            printf("b is largest no \n");
            largest=b;
        }
    }
    if(c>a){
        if(c>b){
            printf("c is largest no \n");
            largest=c;
        }
    }

    if (largest%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}