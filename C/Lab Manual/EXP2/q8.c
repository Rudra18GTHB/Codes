#include <stdio.h>
void main(){
    int d1,d2;
    printf("Enter Dividend: ");
    scanf("%d",&d1);
    printf("Enter Divisor");
    scanf("%d",&d2);
    printf("Remainder: %d",d1%d2);
    printf("\n");
    printf("Quotient: %d",d1/d2);
}
