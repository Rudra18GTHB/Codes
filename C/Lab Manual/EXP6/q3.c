#include <stdio.h>
int main()
{
    int a,b,sum,*num,*num2;
    printf("Enter the numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    num= &a,num2=&b;
    sum=*num+*num2;
    printf("Sum %d",sum);
    return 0;
}