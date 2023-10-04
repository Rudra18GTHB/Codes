#include <stdio.h>
int main()
{
    int arr[]={1,4,3,7},*search,s;
    search=arr;
    printf("Enter the elemnt to be searched: ");
    scanf("%d",&s);
    for(int i=0;i<4;i++){
        if (s==*(search+i)){
            printf("Elemts found at index: %d",i);
        }
    }
    return 0;
}
