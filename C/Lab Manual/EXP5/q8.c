#include <stdio.h>

int cube(int n){
    int ans=n;
    for(int i=0;i<2;i++){
        ans*=n;
    }
    return ans;
}

int main(){
    int n,sum;
    printf("ENter the number: ");
    scanf("%d",&n);
    sum=cube(n);
    printf("Cube of number is %d",sum);
}