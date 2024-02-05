//Write a program to find the sum of first n natural number using if and goto statement.
#include <stdio.h>

void main(){
    int sum=0;
    int i=1;
    int n= 10;
    loop:
    if(i<=n){
        sum+=i;
        i++;
        goto loop;
    }
    printf("%d",sum);
}