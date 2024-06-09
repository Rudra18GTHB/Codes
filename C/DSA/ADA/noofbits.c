#include <stdio.h>

int bits(int n){
    if(n==1){
        return 1;
    }
    else{
        return bits(n/2)+1;
    }
}

void main(){
    printf("%d", bits(8));
}

//O(logn)