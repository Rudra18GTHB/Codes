#include <stdio.h>
int* fun(){
    int a=10;
    return &a;
}
int main(){
    int *p;
    p=fun();
    printf("%p",p);
    return 0;
}