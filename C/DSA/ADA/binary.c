#include <stdio.h>
int binary(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n%2 + 10*binary(n/2));
    }
    return 0;
}

int main(){
    printf("%d ", binary(10));
    return 0;
}

//O(logn)