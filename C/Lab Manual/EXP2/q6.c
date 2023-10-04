#include <stdio.h>
void main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    if (n%3==0){
        printf("%d is divisible by 3",n);
    }
    else if (n%7==0){
        printf("%d is divisible by 7",n);
    }
    else{
        printf("%d is not divisible by neither 3 nor 7",n);
    }
}