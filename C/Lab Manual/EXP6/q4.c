#include <stdio.h>
int main()
{
    int len,*arr_ptr;
    printf("Enter the length of array: ");
    scanf("%d",&len);
    int new_arr[len];
    for (int i=0;i<len;i++){
        scanf("%d",&new_arr[i]);
    }
    arr_ptr=new_arr;
    printf("Array: ");
    for(int j=0;j<len;j++){
        printf("%d",*(arr_ptr+j));
    }
    return 0;
}