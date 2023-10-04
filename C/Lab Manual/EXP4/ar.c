#include <stdio.h>
//entering and accessing element in array. 
int main()
{
    int rol[5];
    for (int i=0;i<5;i++){
        printf("Enter roll no: ");
        scanf("%d",&rol[i]);
    }
    printf("Array:");
    for(int j=0;j<5;j++){
        printf("%d ",rol[j]);
    }
    return 0;
}
