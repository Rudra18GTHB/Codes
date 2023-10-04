#include <stdio.h>
int main()
{
    int n_a[]={1,2,3,89,5,7,4,2,5},sn;
    printf("Enter the elemnt to be searched: ");
    int size=sizeof(n_a)/sizeof(n_a[0]);
    scanf("%d",&sn);
    for(int i=0;i<size;i++){
        if (n_a[i]==sn){
            printf("Element found at index: %d",i);
        }
    }
    return 0;
}
