#include <stdio.h>

int main()
{
    int base, expo, final;
    printf("Enter the base number: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&expo);
    for(int i=0;i<expo;i++){
        final = base*base;
    }
    printf("Computed Number: %d",final);
    return 0;
}
