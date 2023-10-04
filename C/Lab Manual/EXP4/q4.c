#include <stdio.h>
int main()
{
    int arn[]={45,3,2,7,9,65,4,2,8,1},size=sizeof(arn)/sizeof(arn[0])-1;
    printf("Reversed array: ");
    for(int i=size;i>=0;i--){
        printf("%d ",arn[i]);
    }
    return 0;
}
