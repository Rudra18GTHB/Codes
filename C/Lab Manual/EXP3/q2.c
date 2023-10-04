#include <stdio.h>

void main(){
    int n,N;
    printf("Enter the number: ");
    scanf("%d",&n);

    while (n>0){
        N=n%10;
        n=n/10;
        printf("%d",N);
    }
}