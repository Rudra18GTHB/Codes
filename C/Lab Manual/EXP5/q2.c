#include <stdio.h>

int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Updated by value: ");
    printf("a=%d",a);
    printf("b=%d\n",b);
}

int swapbyref(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("Updated by reference: ");
    printf("a=%d",*a);
    printf("b=%d\n",*b);
}

int main(){
    int a,b;
    printf("Enter two number:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    swap(a,b);
    printf("Original Remains:\n");
    printf("a=%d",a);
    printf("b=%d",b);
    swapbyref(&a,&b);
    printf("Original Reamins:\n");
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}