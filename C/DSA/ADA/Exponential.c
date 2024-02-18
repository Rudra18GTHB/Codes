#include <stdio.h>

// int main()
// {
//     int base, expo, final;
//     printf("Enter the base number: ");
//     scanf("%d",&base);
//     printf("Enter the exponent: ");
//     scanf("%d",&expo);
//     for(int i=0;i<expo;i++){
//         final = base*base;
//     }
//     printf("Computed Number: %d",final);
//     return 0;
// }

int main()
{
    int base, expo;
    printf("Enter the base number: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&expo);
    int m=expo;
    int power=1;
    int z = base;
    while(m>0){
        while (m%2==0){
            m=m/2;
            z=z*z;
        }
        m = m-1;
        power = power *z;
    }
    printf("%d",power);
    return 0;
}