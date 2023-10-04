#include <stdio.h>

int main()
{
    int arr[]={11,22,33,44,55,66,77,88,99},size=sizeof(arr)/sizeof(arr[0])-1;
    printf("Reversed array: ");
    for(int i=size;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}