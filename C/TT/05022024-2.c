//Write a program to accept a number and display whether it is divisible by 5 only or 6 only or both 5 and 6.

#include <stdio.h>
int main(){
    int n=12;
    int divisibleby5=0;
    int divisibleby6 =0;
    if(n%5==0){
        divisibleby5=1;
    }
    if(n%6==0){
        divisibleby6=1;
    }
    if(divisibleby5){
        printf("Divisible by 5\n");
    }
    if(divisibleby6){
        printf("Divisible by 6\n");
    }
    if(divisibleby5 && divisibleby6){
        printf("Divisible by both 5 and 6\n");
    }
}