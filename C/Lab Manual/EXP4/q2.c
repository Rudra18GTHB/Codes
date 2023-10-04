#include <stdio.h>

int main()
{
    int n_a[]={1,2,3,89,5,7,4,2,5},sum=0;
    int size=sizeof(n_a)/sizeof(n_a[0]);
    for(int i=0;i<size;i++){
        sum+=n_a[i];
    }
    printf("Sum of all the elements is: %d",sum);
    return 0;
}
