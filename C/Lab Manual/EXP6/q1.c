#include <stdio.h>
int main()
{
    int number[6]={1,2,3,4,5,6},sum=0,*ptr;
    ptr=number;
    for(int i=0;i<6;i++){
        sum+=*(ptr+i);
    }
    printf("Sum of all the elements: %d",sum);
    return 0;
}