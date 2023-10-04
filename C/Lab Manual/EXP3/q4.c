#include <stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while (number>0){
        sum+=number%10;
        number=number/10;
    }
    printf("The sum is %d",sum);
    return 0;
}