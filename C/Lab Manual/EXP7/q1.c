#include <stdio.h>
int main()
{
    int num[]={1,2,3,4,5,6};
    print_array(num);
    return 0;
}

int print_array(int num[]){
    for(int i=0;i<5;i++){
        printf("%d ",num[i]);
    }
}

