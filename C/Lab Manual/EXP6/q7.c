#include <stdio.h>

int main()
{
    int arr[4]={5,6,7,8},*rev_ptr;
    rev_ptr=arr;
    printf("Reversed Array: ");
    for(int i=3;i>=0;i--){
        printf("%d ",*(rev_ptr+i));
    }
    return 0;
}


