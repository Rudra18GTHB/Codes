#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,67},*new_ptr,new_arr[7];
    new_ptr=arr;
    printf("Copy created successfully: ");
    for(int i=0;i<7;i++){
        new_arr[i]=*(new_ptr+i);
        printf("%d ",*(new_arr+i));    
    }
    return 0;
}


