#include <stdio.h>
int main()
{
    int temp,arr[]={4,5,6,7},arrr={8,9,0,1},*arr1_ptr,*arr2_ptr;
    arr1_ptr=&arr;
    arr2_ptr=&arrr;
    for (int i=0;i<4;i++){
        temp=*(arr1_ptr+i);
        *(arr1_ptr+i)=*(arr2_ptr+i);
        *(arr2_ptr+i)=temp;
    }
    printf("Interchanged 2nd Array:");
    for(int j=0;j<4;j++){
        printf("%d ",*(arr2_ptr+j));
    }
    return 0;
}