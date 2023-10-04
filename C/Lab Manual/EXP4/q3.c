#include <stdio.h>
int main()
{
    int n_a[]={26,2,3,89,5,7,4,2,5},largest=n_a[0],smallest=n_a[0];
    for(int i=0;i<9;i++){
        if(n_a[i]>largest){
            largest=n_a[i];
        }
        if(n_a[i]<smallest){
            smallest=n_a[i];
        }
    }
    printf("The largest number is: %d",largest);
    printf("The smallest number is: %d",smallest);
    return 0;
}
