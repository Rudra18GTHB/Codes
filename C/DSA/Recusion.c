#include <stdio.h>

int printfibo(int n);

int main()
{
    for (int i = 1; i <=2; i++)
    {
        printf("%d ",printfibo(i));
    }
    return 0;
}

int printfibo(int n){
    if(n<=2){
        return n-1;
    }
    else{
        return printfibo(n-1)+printfibo(n-2);
    }
}
